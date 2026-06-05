/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:40:39 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/03 16:55:31 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "===== INTERN FORM CREATION TESTS =====" << std::endl << std::endl;

	Intern someRandomIntern;
	AForm *form;

	// Test 1: Create ShrubberyCreationForm
	std::cout << "--- Test 1: ShrubberyCreationForm ---" << std::endl;
	form = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;

	// Test 2: Create RobotomyRequestForm
	std::cout << "--- Test 2: RobotomyRequestForm ---" << std::endl;
	form = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;

	// Test 3: Create PresidentialPardonForm
	std::cout << "--- Test 3: PresidentialPardonForm ---" << std::endl;
	form = someRandomIntern.makeForm("PresidentialPardonForm", "Criminal");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;

	// Test 4: Try to create an unknown form
	std::cout << "--- Test 4: Unknown Form ---" << std::endl;
	form = someRandomIntern.makeForm("UnknownForm", "target");
	if (form)
		delete form;
	else
		std::cout << "Form pointer is NULL" << std::endl;
	std::cout << std::endl;

	// Test 5: Full workflow - Intern creates form, Bureaucrat signs and executes
	std::cout << "===== FULL WORKFLOW TEST =====" << std::endl << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		std::cout << boss << std::endl;

		form = someRandomIntern.makeForm("PresidentialPardonForm", "Arthur Dent");
		if (form)
		{
			std::cout << *form << std::endl;
			boss.signForm(*form);
			std::cout << *form << std::endl;
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test 6: Bureaucrat with low grade tries to execute
	std::cout << "===== LOW GRADE BUREAUCRAT TEST =====" << std::endl << std::endl;
	try
	{
		Bureaucrat lowGrade("Intern Bob", 150);
		std::cout << lowGrade << std::endl;

		form = someRandomIntern.makeForm("RobotomyRequestForm", "Target");
		if (form)
		{
			std::cout << *form << std::endl;
			lowGrade.signForm(*form);
			lowGrade.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

