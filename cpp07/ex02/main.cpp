/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:36:57 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/26 06:59:26 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> a;
    std::cout << "Empty array size: " << a.size() << std::endl;

    Array<int> b(5);
    std::cout << "Array of 5 ints: ";
    for (unsigned int i = 0; i < b.size(); ++i)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    b[2] = 42;
    std::cout << "After setting b[2] = 42: ";
    for (unsigned int i = 0; i < b.size(); ++i)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    Array<int> c = b;
    c[2] = 99;
    std::cout << "Copy c, set c[2]=99, b[2]=" << b[2] << ", c[2]=" << c[2] << std::endl;

    try {
        std::cout << b[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

