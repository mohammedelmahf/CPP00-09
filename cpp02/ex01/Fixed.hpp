/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:20:17 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/23 17:59:26 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int _value;
        static int const _digits = 8;
    public :
        Fixed(void);
        Fixed(Fixed const &input);
        Fixed(int const input);
        Fixed(float const input);
        ~Fixed(void);
        Fixed & operator=(Fixed const &input);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &input);