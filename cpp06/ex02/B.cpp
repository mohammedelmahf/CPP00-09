/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:41:21 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 09:41:36 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "B Default constructor called" << std::endl;
}

B::B(const B &copy)
{
	*this = copy;
}

B::~B()
{
	std::cout << "B Destructor called" << std::endl;
}

B &B::operator=(const B &copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}