/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:27:02 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:27:20 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat Parameterized constructor called" << std::endl;
}

Cat::Cat(Cat const &input) : Animal(input)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &input)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &input)
        this->_type = input._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}