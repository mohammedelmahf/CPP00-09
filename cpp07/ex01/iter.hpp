/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:26:15 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/26 02:32:49 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T_array , typename T_function>
void    iter(T_array *array , size_t length , T_function function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}