/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:16:41 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/27 14:26:35 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie " <<_name << " Created 🧟" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << _name << " destroyed." << std::endl;
}

void Zombie::setName(std::string s)
{
    _name = s;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}