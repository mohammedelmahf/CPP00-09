/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:25:45 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/28 16:04:39 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

const std::string &Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(std::string str)
{
    _type = str;
}