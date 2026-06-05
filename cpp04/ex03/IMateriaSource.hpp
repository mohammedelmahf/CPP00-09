/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:24:01 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:24:03 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	protected:
		/* Constructors & Destructors */
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const &copy);

		/* Basic Operators */
		IMateriaSource const	&operator=(IMateriaSource const &copy);
	public:
		/* Constructors & Destructors */
		virtual ~IMateriaSource() {}

		/* Main Member Functions */
		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};
