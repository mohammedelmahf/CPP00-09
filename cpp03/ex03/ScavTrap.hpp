/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:42:33 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:39:57 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ClapTrap.hpp"


class	ScavTrap : virtual public ClapTrap
{

    public:

	    ScavTrap(std::string name);
	    ScavTrap(ScavTrap const & input);
	    ScavTrap & operator=(ScavTrap const & input);
	    ~ScavTrap(void);

	    void	attack(const std::string & target);
	    void	guardGate(void);

    private:

	    void	status(void);

    protected:

	    static unsigned int const _initHitPoints = 100;
	    static unsigned int const _initEnergyPoints = 50;
	    static unsigned int const _initAttackDamage = 20;

};