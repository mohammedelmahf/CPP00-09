/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:28:30 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/28 20:56:41 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon &weapon) :_name(name) , _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << _name << " attackes with their " << _weapon.getType() << std::endl;
}