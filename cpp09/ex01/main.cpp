#include "RPN.hpp"



int main(int ac , char **av)
{
    if(ac != 2) 
    {
        std::cout << "Usage: ./RPN [expression]" << std::endl;    
        return 1;
    }

    try 
    {
        RPN rpn(av[1]);
        std::cout << rpn.process() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}