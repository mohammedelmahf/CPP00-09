/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:40:39 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/03 16:59:25 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    srand(time(NULL));

    std::cout << std::endl << "Test ex02" << std::endl;

    std::cout << std::endl << "Test ex02 ShrubberyCreationForm" << std::endl;
    Bureaucrat Mr_Shrubby("Mr_Shrubby", 130);
    ShrubberyCreationForm Shrubby_form("Hello");
    std::cout << std::endl;
    std::cout << Shrubby_form;
    Mr_Shrubby.signForm(Shrubby_form);
    std::cout << Shrubby_form;
    Mr_Shrubby.executeForm(Shrubby_form);

    std::cout << std::endl << "Test ex02 RobotomyRequestForm" << std::endl;
    RobotomyRequestForm Robo_form("I am a robo form");
    Bureaucrat Mr_Robo("Mr_Robo", 45);

    Mr_Robo.executeForm(Robo_form);
    Mr_Robo.signForm(Robo_form);
    Mr_Robo.executeForm(Robo_form);
    Mr_Robo.executeForm(Robo_form);
    Mr_Robo.executeForm(Robo_form);

    std::cout << std::endl << "Test ex02 PresidentialPardonForm" << std::endl;
    PresidentialPardonForm President_form("I am a robo form");
    Bureaucrat Mr_President("Mr_President", 5);

    Mr_Robo.executeForm(President_form);
    Mr_Robo.signForm(President_form);

    Mr_President.executeForm(President_form);
    Mr_President.signForm(President_form);
    Mr_President.executeForm(President_form);

    return (0);
}
