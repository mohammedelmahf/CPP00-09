/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:10:44 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/24 09:59:49 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name) , _hitpoints(_inithitpoints) , _energypoint(_initenergypoint) , _attackdamage(_initattckdamage) {
    constructorCall("set");
}

ClapTrap::ClapTrap(ClapTrap const &input) {
    this->_name = input._name;
    this->_hitpoints = input._hitpoints;
    this->_energypoint = input._energypoint;
    this->_attackdamage = input._attackdamage;
    constructorCall("copied");
    
}

ClapTrap & ClapTrap::operator=(ClapTrap const & input) {
    this->_name = input._name;
    this->_hitpoints = input._hitpoints;
    this->_energypoint = input._energypoint;
    this->_attackdamage = input._attackdamage;
    constructorCall("assigned");
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (this->_energypoint > 0 && this->_hitpoints > 0)
    {
        this->_energypoint--;
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " attacks " << target
                  << ", causing " << this->_attackdamage
                  << " points of damage!\n";
    }
    else if (this->_energypoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to attack " << target
                  << ", but has no energyPoints left to perform attack!\n";
    }
    else
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to attack " << target
                  << ", but is already destroyed!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    if (amount >= this->_hitpoints)
        this->_hitpoints = 0;
    else
        this->_hitpoints -= amount;

    std::cout << "ClapTrap " << this->_name;
    status();
    std::cout << " has taken " << amount << " points of damage!\n";

    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " has taken too much damage and has been destroyed!\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    
    if (this->_energypoint > 0 && this->_hitpoints > 0)
    {
        this->_energypoint--;

        if (amount + _hitpoints >= _inithitpoints)
            this->_hitpoints = _inithitpoints;
        else
            this->_hitpoints += amount;

        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " repaired by " << amount << " hit points!\n";
    }
    else if (this->_energypoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to repair by " << amount
                  << " hit points, but has no energyPoints left to perform repair!\n";
    }
    else
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to repair by " << amount
                  << " hit points, but is already destroyed!\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    
    if (this->_energypoint > 0 && this->_hitpoints > 0)
    {
        this->_energypoint--;

        if (amount + _hitpoints >= _inithitpoints)
            this->_hitpoints = _inithitpoints;
        else
            this->_hitpoints += amount;

        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " repaired by " << amount << " hit points!\n";
    }
    else if (this->_energypoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to repair by " << amount
                  << " hit points, but has no energyPoints left to perform repair!\n";
    }
    else
    {
        std::cout << "ClapTrap " << this->_name;
        status();
        std::cout << " tried to repair by " << amount
                  << " hit points, but is already destroyed!\n";
    }
}


std::string ClapTrap::getName() {
    return(this->_name);
}

void ClapTrap::constructorCall(std::string type) {
    std::cout << "ClapTrap " << this->_name << " was " << type << " with ";
    status();
    std::cout << std::endl;
}

void	ClapTrap::status(void) {
	std::cout	<< " =<[HP (" << this->_hitpoints <<  "/" << _inithitpoints
				<< ") EP (" << this->_energypoint << "/" << _initenergypoint
				<< ") AD (" << this->_attackdamage << ")]>=";
}