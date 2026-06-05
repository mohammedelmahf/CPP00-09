/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:35:58 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:36:00 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_initHitPoints;
    this->_energyPoints = ScavTrap::_initEnergyPoints;
    this->_attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << name << " was set with";
    status();
    std::cout << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & input) 
    : ClapTrap(input._name + "_clap_name"), FragTrap(input._name + "_clap_name"), ScavTrap(input._name + "_clap_name")
{
    *this = input;
    std::cout << "DiamondTrap " << input._name << " was copied and set with";
    status();
    std::cout << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & input)
{
    this->_name = input._name;
    this->_hitPoints = input._hitPoints;
    this->_energyPoints = input._energyPoints;
    this->_attackDamage = input._attackDamage;
    std::cout << "DiamondTrap " << input._name << " was assigned and set with";
    status();
    std::cout << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " has been destroyed\n";
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap " << this->_name;
    status();
    std::cout << " whoAmI called: "
              << "Diamond name = " << this->_name
              << " ClapTrap name = " << ClapTrap::_name << std::endl;
}

void DiamondTrap::status(void)
{
    std::cout << " =<[HP (" << this->_hitPoints << "/" << FragTrap::_initHitPoints
              << ") EP (" << this->_energyPoints << "/" << ScavTrap::_initEnergyPoints
              << ") AD (" << this->_attackDamage << ")]>=";
}
