/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:37:45 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:46:57 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat Parameterized constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &input) : WrongAnimal(input)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &input)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &input)
        this->_type = input._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow (WrongCat)" << std::endl;
}

