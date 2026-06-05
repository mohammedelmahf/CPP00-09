/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:23:02 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:23:04 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

		/* Constructors & Destructors */
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
	public:
		/* Constructors & Destructors */
		virtual ~AMateria(void);

		/* Basic Operators */
		AMateria const	&operator=(AMateria const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;

		/* Main Member Functions */
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
};
