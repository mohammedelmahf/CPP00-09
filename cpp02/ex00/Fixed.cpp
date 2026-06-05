/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:02:58 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/13 20:37:25 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(Fixed const &input) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = input.getRawBits();
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits function called\n";
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

Fixed & Fixed::operator=(Fixed const &input) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = input.getRawBits();
    return(*this);
}