#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <exception>
#include <sstream>
#include <cstdlib>
#include <iomanip>
class BitcoinExchange 
{
    private:
        std::map<std::string, double> _rates;
        void    _readDataBase();
        bool    validData(std::string const &data);
        double  validPrice(std::string const &value);
        void    multiplyWithQuote(std::string const &date, double price);
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& source);
        BitcoinExchange& operator=(const BitcoinExchange& source);
        ~BitcoinExchange();

        std::map<std::string, double> const &getRates() const;
        void execute(char const *fileName);

        class CouldNotOPenFile : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("Could Not Open File");
                }
        };

        class InvalidColumnFormat : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("Invalid Column Format , Expected : 'date,exchange_rate'");
            }
        };

        class InvalidPriceFormat : public std::exception 
        {
            virtual const char *what() const throw()
            {
                return("Invalid price format. Expected a number between 0.0 and 1000.0");
            } 
        };




};