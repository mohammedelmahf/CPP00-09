#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    _readDataBase();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& source)
{
    if(this != & source)
        *this = source;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& source)
{
    if(this != &source)
        this->_rates = source._rates;
    return *this;
}

std::map<std::string,  double> const &BitcoinExchange::getRates() const 
{
    return this->_rates;
}

void BitcoinExchange::_readDataBase()
{
    std::ifstream file("data.csv");
    if(!file.is_open())
        throw CouldNotOPenFile();
    
    std::string line;

    std::getline(file , line);
    if(line != "date,exchange_rate")
        throw InvalidColumnFormat();

    while(std::getline(file , line))
    {
        std::string data , price;
        std::istringstream ss(line);
        std::getline(ss , data , ',');
        std::getline(ss , price);

        double priceValue;
        std::istringstream priceStream(price);
        if(!(priceStream >> priceValue))
            throw InvalidPriceFormat();
        this->_rates[data] = priceValue;
    }
    file.close();
}

void    BitcoinExchange::execute(char const *fileName)
{
    std::ifstream file(fileName);
    if(!file.is_open())
        throw CouldNotOPenFile();
    
    std::string line;

    std::getline(file , line);
    if(line != "date | value")
        throw InvalidColumnFormat();

    while(std::getline(file , line))
    {
        std::string data , valueStr;
        double priceValue;
        std::istringstream ss(line);
        std::getline(ss , data , '|');
        std::getline(ss  , valueStr, '|');

        if(!data.empty())
            data = data.erase(data.length() - 1);
        if(validData(data) == false)
        {
            std::cout << "Error: bad input => " << data << std::endl;
            continue;
        }

        priceValue = validPrice(valueStr);
        if(priceValue != -1)
            multiplyWithQuote(data , priceValue);
    }
    file.close();
}

bool    BitcoinExchange::validData(std::string const &data)
{
    if(data.size() != 10 || data[4] != '-' || data[7] != '-')
        return false;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(i == 4 || i == 7)
            continue;
        if(!isdigit(data[i]))
            return false;
    }

    int year = atoi(data.substr(0 , 4).c_str());
    int month = atoi(data.substr(5 , 2).c_str());
    int day = atoi(data.substr(8, 2).c_str());

    if(month < 1 || month > 12 || day < 1)
        return false;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 );

    if(month == 2 && isLeap)
        daysInMonth[1] = 29;

    if(day > daysInMonth[month - 1])
        return false;
    return true;
}

double BitcoinExchange::validPrice(std::string const &value)
{
    double  priceValue;
    std::istringstream priceStream(value);

    if(!(priceStream >> priceValue))
    {
        std::cout << "Error : bad input => " << value << std::endl;
        return -1;
    }

    char leftover;
    if(priceStream >> leftover)
    {
        std::cout << "Error : bad input => " << value << std::endl;
        return -1;
    }

    if(priceValue < 0)
    {
        std::cout << "Error : Not a positive Number" <<std::endl;
        return -1; 
    }
    if(priceValue > 1000)
    {
        std::cout << "Error : too large a Number" <<std::endl;
        return -1;
    }

    return priceValue;
}

void BitcoinExchange::multiplyWithQuote(const std::string &date, double value)
{
    std::map<std::string, double>::iterator it = _rates.lower_bound(date);

    if (it == _rates.end() || it->first != date)
    {
        if (it == _rates.begin())
            return;
        --it;
    }

    double result = value * it->second;

    std::cout << date
              << " => "
              << value
              << " = "
              <<std::fixed
              <<std::setprecision(2)
              << result
              << std::endl;
}

BitcoinExchange::~BitcoinExchange(){}