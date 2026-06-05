/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 21:36:42 by maelmahf          #+#    #+#             */
/*   Updated: 2026/01/15 21:37:23 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include <fstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class RobotomyRequestForm : public AForm
{
	private:
		std::string		_target;
		virtual void	performAction() const;
	
	public:
	// Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		// exceptions
		class RobotizationFailed : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};