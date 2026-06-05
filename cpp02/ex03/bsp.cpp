/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:47:16 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/21 10:15:47 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	cx_ax(c.getX() - a.getX());
	Fixed	cy_ay(c.getY() - a.getY());
	Fixed	bx_ax(b.getX() - a.getX());
	Fixed	by_ay(b.getY() - a.getY());
	Fixed	w1( (a.getX() * cy_ay.toFloat() + (point.getY() - a.getY()) * cx_ax.toFloat() - point.getX() * cy_ay.toFloat()) /
				(by_ay.toFloat() * cx_ax.toFloat() - bx_ax.toFloat() * cy_ay.toFloat()));
	Fixed	w2( (point.getY() - a.getY() - w1.toFloat() * by_ay.toFloat()) /
				cy_ay.toFloat());
	//std::cout << "w1 = " << w1 << std::endl;
	//std::cout << "w2 = " << w2 << std::endl;
	//std::cout << "w1 + w2 = " << w1 + w2 << std::endl;
	if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
		return (true);
	return (false);
}