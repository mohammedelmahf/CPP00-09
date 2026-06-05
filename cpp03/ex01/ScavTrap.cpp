/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:42:29 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:04:50 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = _initHitPoints;
    this->_energyPoints = _initEnergyPoints;
    this->_attackDamage = _initAttackDamage;
    std::cout << "ScavTrap " << name << " was set";
    status();
    std::cout << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & input) : ClapTrap(input._name)
{
    this->_hitPoints = input._hitPoints;
    this->_energyPoints = input._energyPoints;
    this->_attackDamage = input._attackDamage;
    std::cout << "ScavTrap " << input._name << " was copied and set";
    status();
    std::cout << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & input)
{
    this->_name = input._name;
    this->_hitPoints = input._hitPoints;
    this->_energyPoints = input._energyPoints;
    this->_attackDamage = input._attackDamage;
    std::cout << "ScavTrap " << input._name << " was assigned and set";
    status();
    std::cout << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " has been destroyed\n";
}

void ScavTrap::attack(const std::string & target)
{
    std::cout << "ScavTrap " << this->_name;
    status();
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << " attacks " << target
                  << ", causing " << this->_attackDamage << " points of damage!\n";
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << " tried to attack " << target
                  << ", but has no energyPoints left to perform attack!\n";
    }
    else
    {
        std::cout << " tried to attack " << target
                  << ", but is already destroyed!\n";
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name;
    status();
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << " is now in Gate keeper mode\n";
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << " tried to go in Gate keeper mode"
                  << ", but has no energyPoints left to perform guardGate!\n";
    }
    else
    {
        std::cout << " tried to go in Gate keeper mode"
                  << ", but is already destroyed!\n";
    }
}

void ScavTrap::status(void)
{
    std::cout << " =<[HP (" << this->_hitPoints << "/" << _initHitPoints
              << ") EP (" << this->_energyPoints << "/" << _initEnergyPoints
              << ") AD (" << this->_attackDamage << ")]>=";
}
