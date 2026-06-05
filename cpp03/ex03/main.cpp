/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:10:54 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:40:20 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	A("hassan molhanouta");
	ScavTrap	B("amin wldlhaja");
	FragTrap	C("l3adama");
	DiamondTrap D("king");


	D.attack("everyone!");
	D.whoAmI();
	D.highFivesGuys();
	D.guardGate();
	
	C.highFivesGuys();
	C.attack(D.getName());
	
	D.guardGate();
	D.attack(C.getName());
	B.takeDamage(20);
	A.attack(B.getName());
	B.takeDamage(2);
	B.attack(C.getName());
	C.takeDamage(7);
	C.attack(A.getName());
	A.takeDamage(5);
	A.beRepaired(3);
	B.attack(A.getName());
	A.takeDamage(2);
	C.attack(B.getName());
	A.attack(B.getName());
	B.takeDamage(2);
	B.attack(C.getName());
	C.takeDamage(7);
	C.attack(A.getName());
	A.takeDamage(5);
	A.beRepaired(3);
	B.attack(A.getName());
	A.takeDamage(2);
	C.attack(B.getName());
	C.beRepaired(5);
	A.beRepaired(3);
	B.beRepaired(3);
	D.beRepaired(6);
	return (0);
}