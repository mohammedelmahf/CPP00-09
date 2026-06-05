/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:42:08 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 09:43:57 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "C Default constructor called" << std::endl;
}

C::C(const C &copy)
{
	*this = copy;
}

C::~C()
{
	std::cout << "C Destructor called" << std::endl;
}	

C &C::operator=(const C &copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}