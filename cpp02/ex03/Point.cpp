/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:47:42 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/21 09:48:59 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{

}

Point::Point(Point const & input) : _x(input._x), _y(input._y)
{

}

Point::~Point(void)
{

}

Point & Point::operator=(Point & input)
{
	(void) input;
	return (*this);
}

Point const & Point::operator=(Point const & input)
{
	(void) input;
	return (*this);
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}

std::ostream & operator<<(std::ostream & o, Point const & input)
{
	o << "(" << input.getX() << "," << input.getY() << ")";
	return (o);
}