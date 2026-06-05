/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:57:28 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/10 10:54:02 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Harl
{
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};