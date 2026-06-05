/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:10:36 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/27 14:15:26 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
    private:
    std::string _name;
    
    public:
    Zombie(std::string s);
    ~Zombie();
    
    void announce(void ) const;
    
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
