/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:27:50 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:28:03 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog Parameterized constructor called" << std::endl;
}

Dog::Dog(Dog const &input) : Animal(input)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &input)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &input)
        this->_type = input._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

