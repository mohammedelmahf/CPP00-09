/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:11:53 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:20:59 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Parameterized constructor called" << std::endl;
}

Animal::Animal(Animal const &input) : _type(input._type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &input)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &input)
        this->_type = input._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}