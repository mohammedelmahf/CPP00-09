/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:45:14 by maelmahf          #+#    #+#             */
/*   Updated: 2026/01/12 11:02:13 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
    std::cout << std::endl << "Test ex01" << std::endl;

    std::cout << std::endl << "Test too high and too low creation" << std::endl;
    try
    {
        Bureaucrat Sleeper1("Bernd", 1500);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat Sleeper2("Olaf", -10);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Test increasing" << std::endl;
    Bureaucrat bob("Bob", 2);
    std::cout << bob;
    try
    {
        bob.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << bob;
    
    try
    {
        bob.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << bob;

    std::cout << std::endl << "Test decreasing" << std::endl;
    Bureaucrat tim("Tim", 149);
    std::cout << tim;
    try
    {
        tim.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << tim;
    
    try
    {
        tim.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << tim;

    std::cout << std::endl << "Test ex01" << std::endl;

    Form id_form("ID FORM", 100, 90);
    Bureaucrat mr_slow;
    Bureaucrat mr_id("MR_ID", 100);
    std::cout << id_form;
    
    mr_slow.signForm(id_form);
    std::cout << id_form;

    mr_id.signForm(id_form);
    std::cout << id_form;
    
    return (0);
}
