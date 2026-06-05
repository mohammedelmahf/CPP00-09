/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:48:07 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:57:57 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_own_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_own_brain = new Brain(*other._own_brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_own_brain;
        this->_own_brain = new Brain(*other._own_brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->_own_brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getIdea(int idea_nr) const
{
    return this->_own_brain->ideas[idea_nr];
}

void Dog::setIdea(int idea_nr, std::string idea)
{
    this->_own_brain->ideas[idea_nr] = idea;
}
