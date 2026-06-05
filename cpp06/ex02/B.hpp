/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:00:52 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/20 16:00:59 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(const B &copy);
		virtual ~B();
		B &operator=(const B &copy);
};
