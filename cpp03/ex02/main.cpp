/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:10:54 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:22:20 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	A("hassan molhanouta");
	ScavTrap	B("amin wldlhaja");
	FragTrap	C("");


	C.highFivesGuys();
	A.attack(B.getName());
	
	B.guardGate();
	C.attack(A.getName());
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
	A.beRepaired(3);
	A.beRepaired(3);
	A.beRepaired(3);
	A.beRepaired(3);
	A.beRepaired(3);
	A.beRepaired(3);
	return (0);
}