/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:23:44 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/04 16:23:46 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter object created with default constructor" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
	*this = copy;
	std::cout << "ICharacter object copied" << std::endl;
}

ICharacter const	&ICharacter::operator=(ICharacter const &copy)
{
	(void)copy;
	std::cout << "ICharacter Assignment Operator Called" << std::endl;
	return (*this);
}
