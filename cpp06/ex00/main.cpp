#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::string s = argv[1];
        std::cout << "Input: " << s << '\n';
        try
        {
            ScalarConverter::convert(s);
        }
        catch (const ScalarConverter::NonDisplayableException &e)
        {
            std::cout << e.what();
        }
        std::cout << "----------------\n";
    }
    return 0;
}
