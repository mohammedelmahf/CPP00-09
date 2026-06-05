/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:23:39 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:23:41 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		/* Constructors & Destructors */
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);

		/* Basic Operators */
		Ice const	&operator=(Ice const &copy);

		/* Main Member Functions */
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};
