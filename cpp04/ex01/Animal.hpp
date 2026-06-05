/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:54:13 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 10:32:37 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include "iostream"

class Animal 
{
    protected :
        std::string _type;
    public :
        Animal();
        Animal(std::string type);
        Animal(Animal const &input);
        Animal & operator=(Animal const &inpput);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};