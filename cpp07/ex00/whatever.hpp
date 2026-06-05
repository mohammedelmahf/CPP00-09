/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:03:09 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/26 02:19:07 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include<iostream>


template<typename T>
void swap(T &a , T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T &a , T &b)
{
    if(a > b)
        return b;
    else if (a < b)
        return a;
    return b;
}

template<typename T>
T max(T &a , T &b)
{
    if(a > b)
        return a;
    else if (a < b)
        return b;
    return b;
}