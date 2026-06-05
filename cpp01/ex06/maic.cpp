/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:42:35 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/10 10:53:13 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc , char **argv)
{
	Harl Harl;
    std::string level;

    if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (0);
	}
    level = argv[1];
    Harl.complain(level);
	return (0);
}