/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:13:00 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:05:46 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>


class	ClapTrap
{
public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & input);
	ClapTrap & operator=(ClapTrap const & input);
	~ClapTrap(void);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void);

protected:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

private:

	void		constructorCall(std::string type);
	void		status(void);

	static unsigned int const _inithitpoints = 10;
	static unsigned int const _initEnergyPoint = 10;
	static unsigned int const _initattckDamage = 0;
};