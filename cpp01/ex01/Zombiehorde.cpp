/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:26:58 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/27 14:27:06 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 0)
        return NULL;
    
    Zombie *zombieHorde = new Zombie[N];
    for(int i = 0 ; i < N ; i++)
    {
            zombieHorde[i].setName(name);
    }
    return zombieHorde;
}