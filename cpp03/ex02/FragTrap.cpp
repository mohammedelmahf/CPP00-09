/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:16:53 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:23:16 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = _initHitPoints;
    this->_energyPoints = _initEnergyPoints;
    this->_attackDamage = _initAttackDamage;
    std::cout << "FragTrap " << name << " was set";
    status();
    std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap const & input) : ClapTrap(input._name)
{
    this->_hitPoints = input._hitPoints;
    this->_energyPoints = input._energyPoints;
    this->_attackDamage = input._attackDamage;
    std::cout << "FragTrap " << input._name << " was copied and set";
    status();
    std::cout << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & input)
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

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " has been destroyed\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name;
    status();

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << " is giving high fives!\n";
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << " tried to give high fives, but has no energyPoints left to perform guardGate!\n";
    }
    else
    {
        std::cout << " tried to give high fives, but is already destroyed!\n";
    }
}

void FragTrap::status(void)
{
    std::cout << " =<[HP (" << this->_hitPoints << "/" << _initHitPoints
              << ") EP (" << this->_energyPoints << "/" << _initEnergyPoints
              << ") AD (" << this->_attackDamage << ")]>=";
}
