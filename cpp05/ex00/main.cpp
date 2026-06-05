/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:08:33 by maelmahf          #+#    #+#             */
/*   Updated: 2026/01/10 18:00:39 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== Default Constructor ===" << std::endl;
    Bureaucrat b1;
    std::cout << b1;

    std::cout << "\n=== Valid Initialization ===" << std::endl;
    try {
        Bureaucrat b2("Alice", 500);
        std::cout << b2;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== Too High Grade (Exception) ===" << std::endl;
    try {
        Bureaucrat b3("HighGuy", 0); // should throw
        std::cout << b3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== Too Low Grade (Exception) ===" << std::endl;
    try {
        Bureaucrat b4("LowGuy", 151); // should throw
        std::cout << b4;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== Increment / Decrement ===" << std::endl;
    try {
        Bureaucrat b5("Worker", 2);
        std::cout << b5;

        b5.incrementGrade(); // goes to 1
        std::cout << "After increment: " << b5;

        b5.incrementGrade(); // should throw
        std::cout << "After increment: " << b5;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== Copy Constructor ===" << std::endl;
    Bureaucrat original("Original", 10);
    Bureaucrat copy(original);
    std::cout << "Original: " << original;
    std::cout << "Copy:     " << copy;

    std::cout << "\n=== Assignment Operator ===" << std::endl;
    Bureaucrat a("A", 50);
    Bureaucrat b("B", 20);

    std::cout << "Before assignment:" << std::endl;
    std::cout << a;
    std::cout << b;

    a = b;

    std::cout << "After assignment:" << std::endl;
    std::cout << a;
    std::cout << b;

    return 0;
}
