/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:48:42 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/23 18:19:41 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Fixed.hpp"

class Point
{

public:

	Point(void);
	Point(float const x, float const y);
	Point(Point const & input);
	~Point(void);

	Point & operator=(Point & input);
	Point const & operator=(Point const & input);

	float	getX(void) const;
	float	getY(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;

};

std::ostream & operator<<(std::ostream & o, Point const & input);

bool bsp( Point const a, Point const b, Point const c, Point const point);