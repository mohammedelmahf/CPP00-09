/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:16:44 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:16:47 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(_initHitPoints),
	  _energyPoints(_initEnergyPoints), _attackDamage(_initAttackDamage)
{
	constructorCall("set");
}

ClapTrap::ClapTrap(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("copied");
}

ClapTrap & ClapTrap::operator=(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("assigned");
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed\n";
}

void ClapTrap::attack(const std::string & target)
{
	std::cout << "ClapTrap " << this->_name;
	status();

	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << " attacks " << target
		          << ", causing " << this->_attackDamage
		          << " points of damage!\n";
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name;
	status();
	std::cout << " has taken " << amount << " points of damage!\n";

	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		status();
		std::cout << " has taken too much damage and has been destroyed!\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	status();

	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;

		if (amount + _hitPoints >= _initHitPoints)
			this->_hitPoints = _initHitPoints;
		else
			this->_hitPoints += amount;

		std::cout << " repaired by " << amount << " hit points!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << " tried to repair by " << amount
		          << " hit points, but has no energyPoints left to perform repair!\n";
	}
	else
	{
		std::cout << " tried to repair by " << amount
		          << " hit points, but is already destroyed!\n";
	}
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

void ClapTrap::constructorCall(std::string type)
{
	std::cout << "ClapTrap " << this->_name << " was " << type << " with";
	status();
	std::cout << std::endl;
}

void ClapTrap::status(void)
{
	std::cout << " =<[HP (" << this->_hitPoints  << "/" << _initHitPoints
	          << ") EP (" << this->_energyPoints  << "/" << _initEnergyPoints
	          << ") AD (" << this->_attackDamage << ")]>=";
}
