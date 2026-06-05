/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:03:01 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/13 13:42:26 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

    public :
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const &input);

        int		getRawBits( void ) const;
	    void	setRawBits( int const raw );
	    Fixed & operator=(Fixed const &input);

    private:
        int _value;
        static int const _digits = 8;
        
};