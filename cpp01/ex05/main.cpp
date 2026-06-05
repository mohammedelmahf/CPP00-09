/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:57:26 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/10 10:54:11 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl Harl;

	std::cout << std::endl << "------ DEBUG Level ------" << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl << "------ INFO Level ------" << std::endl;;
	Harl.complain("INFO");
	std::cout << std::endl << "------ WARNING Level ------" << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl << "------ ERROR Level ------" << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl << "------ No valid Level ------" << std::endl;
	Harl.complain("ALARM");
	return (0);
}