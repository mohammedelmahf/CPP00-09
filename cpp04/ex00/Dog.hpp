/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:27:36 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:36:11 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string type);
        Dog(Dog const &input);
        Dog & operator=(Dog const &input);
        virtual ~Dog();

        virtual void makeSound() const;
};