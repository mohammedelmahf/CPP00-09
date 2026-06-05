/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:32:22 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/29 10:07:17 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

static Weapon noWeapon("No Weapon");

HumanB::HumanB(std::string name ) :_name(name) , _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    if(_weapon)
        std::cout << _name << " attackes with their " << (*_weapon).getType() << std::endl;
    else
        std::cout << _name << " has no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}