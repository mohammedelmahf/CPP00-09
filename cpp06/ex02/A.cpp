
#include "A.hpp"

A::A()
{
	std::cout << "A Default constructor called" << std::endl;
}

A::A(const A &copy)
{
	*this = copy;
}

A::~A()
{
	std::cout << "A Destructor called" << std::endl;
}

A &A::operator=(const A &copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}