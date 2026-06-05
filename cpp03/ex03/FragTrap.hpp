/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:16:51 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:39:54 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & input);
	FragTrap & operator=(FragTrap const & input);
	~FragTrap(void);

	void	highFivesGuys(void);

private:

	void	status(void);

protected:

	static unsigned int const _initHitPoints = 100;
	static unsigned int const _initEnergyPoints = 100;
	static unsigned int const _initAttackDamage = 30;

};