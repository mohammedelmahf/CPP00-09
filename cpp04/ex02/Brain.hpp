/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:32:52 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:33:35 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Brain
{
    public:
        Brain();
        Brain(Brain const &input);
        Brain & operator=(Brain const &input);
        ~Brain();

        std::string ideas[100];
};