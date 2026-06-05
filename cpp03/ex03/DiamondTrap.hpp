/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:36:13 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/25 22:36:51 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap

{

public:

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & input);
	DiamondTrap & operator=(DiamondTrap const & input);
	~DiamondTrap(void);

	void	whoAmI(void);

private:

	void		status(void);
	std::string	_name;

};