/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:47:36 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/23 18:23:17 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(13, 10);
    Point c(0, 10);

    Point p(2, 5);

    std::cout << "A = " << a << std::endl;
    std::cout << "B = " << b << std::endl;
    std::cout << "C = " << c << std::endl;
    std::cout << "P = " << p << std::endl;

    bool inside = bsp(a, b, c, p);

    if (inside)
        std::cout << "P is inside the triangle!" << std::endl;
    else
        std::cout << "P is not inside the triangle!" << std::endl;

    return 0;
}
