/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:34:58 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:36:53 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class WrongAnimal 
{
    protected :
        std::string _type;
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &input);
        WrongAnimal & operator=(WrongAnimal const &inpput);
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};