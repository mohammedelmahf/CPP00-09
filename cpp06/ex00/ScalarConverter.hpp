#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

enum type {
    CHAR,
    INT,
    DOUBLE,
    FLOAT,
    POSITIVE_INF,
    NEGATIVE_INF,
    NAN_TYPE
};

class ScalarConverter
{
	private:
		ScalarConverter(); // Private constructor -- the class is not meant to be instanciated
		static char _char;
		static int _int;
		static double _double;
		static float _float;

	public:
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &copy);

		static void convert(std::string str);
		static type getType(std::string str);

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

int hasNonDisplayableChar(std::string str);
