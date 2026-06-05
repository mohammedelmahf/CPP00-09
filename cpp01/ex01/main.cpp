/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:12:32 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/27 14:16:13 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;

    Zombie *horde = zombieHorde(N , "Zombies");

    for(int i = 0 ; i < N ; i++)
    {
        horde[i].announce();
    }
    
    delete [] horde;
    return 0;
}