/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:22:53 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:22:56 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria object created" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria object copied" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria object destroyed" << std::endl;
}

AMateria const	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}
