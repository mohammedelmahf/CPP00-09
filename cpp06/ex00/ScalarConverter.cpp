#include "ScalarConverter.hpp"
#include <cstdlib>

// Definition of static member variables
int ScalarConverter::_int = 0;
char ScalarConverter::_char = '\0';
float ScalarConverter::_float = 0.0f;
double ScalarConverter::_double = 0.0;

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarCoverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarCoverter Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

const char* ScalarConverter::NonDisplayableException::what() const throw()
{
	return("Error! You typed not displaylable character!\n");
}

int hasNonDisplayableChar(std::string str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

type ScalarConverter::getType(std::string str)
{
	int i = 0;
	int dot = 0;
	int afterDot = 0;
	int hasChar = 0;

	if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		return (POSITIVE_INF);
	else if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		return (NEGATIVE_INF);
	else if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		return (NAN_TYPE);
		
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (dot)
			afterDot++;
		if (str[i] >= '0' && str[i] <= '9')
			;
		else if (str[i] == '.')
			dot = 1;
		else 
			hasChar = 1;
		i++;
	}
	if (afterDot && !str.empty() && str[str.size() - 1] != 'f')
		return (DOUBLE);
	else if (afterDot && !str.empty() && str[str.size() - 1] == 'f')
		return (FLOAT);
	else if (hasChar)
		return (CHAR);
	else
		return (INT);
}

void ScalarConverter::convert(std::string str)
{
	if (hasNonDisplayableChar(str))
	{
		throw(ScalarConverter::NonDisplayableException());
		return ;
	}
	
	type t = getType(str);

	if (t == POSITIVE_INF)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (t == NEGATIVE_INF)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (t == NAN_TYPE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (t == CHAR)
	{
		_char = str[0];
		_int = static_cast<int>(_char);
		_double = static_cast<double>(_char);
		_float = static_cast<float>(_char);
	}
	else if (t == INT)
	{
		_int = std::atoi(str.c_str());
		_char = static_cast<char>(_int);
		_double = static_cast<double>(_int);
		_float = static_cast<float>(_int);
	}
	else if (t == FLOAT)
	{
		_float = static_cast<float>(std::atof(str.c_str()));
		_char = static_cast<char>(_float);
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float);
	}
	else if (t == DOUBLE)
	{
		_double = std::atof(str.c_str());
		_char = static_cast<char>(_double);
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
	}

	if (_char < 32 || _char > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;
	std::cout << "int: " << _int << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << _float << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << _double << std::endl;
}