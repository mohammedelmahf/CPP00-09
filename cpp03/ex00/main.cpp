/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:10:54 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/21 15:10:55 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("hassan molhanouta");
	ClapTrap	trapB("amin wldlhaja");


	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());

	trapA.takeDamage(5);
	trapA.attack(trapB.getName());
	trapA.beRepaired(1);
	
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapA.beRepaired(3);
	return (0);
}