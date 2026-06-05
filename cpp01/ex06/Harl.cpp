/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:42:40 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/10 10:53:46 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here last month." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG" ,"INFO" ,"WARNING" ,"ERROR"};

    i = 0;

    while(i < 4)
    {
        if(level == levels[i])
            break;
        i++;
    }

    switch(i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::_debug();
			std::cout << "[ INFO ]" << std::endl;
			Harl::_info();
			std::cout << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << "[ ERROR ]" << std::endl;
			Harl::_error();
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Harl::_info();
			std::cout << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << "[ ERROR ]" << std::endl;
			Harl::_error();
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << "[ ERROR ]" << std::endl;
			Harl::_error();
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Harl::_error();
			break;
		default:
			std::cout << "No Valid Level.\n";
			break;
	}
}