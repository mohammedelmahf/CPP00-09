/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:23:26 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:23:28 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		/* Constructors & Destructors */
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);

		/* Basic Operators */
		Cure const	&operator=(Cure const &copy);

		/* Main Member Functions */
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};
