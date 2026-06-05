/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:27:02 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:58:11 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_own_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_own_brain = new Brain(*other._own_brain);
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_own_brain;
        this->_own_brain = new Brain(*other._own_brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->_own_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

std::string Cat::getIdea(int idea_nr) const
{
    return this->_own_brain->ideas[idea_nr];
}

void Cat::setIdea(int idea_nr, std::string idea)
{
    this->_own_brain->ideas[idea_nr] = idea;
}
