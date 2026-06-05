/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:00:09 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/20 16:00:17 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Base.hpp"

class A : public Base
{
	public:
		A();
		A(const A &copy);
		virtual ~A();
		A &operator=(const A &copy);
};