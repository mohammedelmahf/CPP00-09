/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:13:00 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/24 09:56:09 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
class ClapTrap
{
    private:
        std::string _name;
        unsigned int  _hitpoints;
        unsigned int _energypoint;
        unsigned int _attackdamage;

        void constructorCall(std::string type);
        void status();
        static unsigned int const _inithitpoints = 10;
        static unsigned int const _initenergypoint = 10;
        static unsigned int const _initattckdamage = 0;
    public :
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &input);
        ClapTrap & operator=(ClapTrap const & input);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string	getName(void);
};