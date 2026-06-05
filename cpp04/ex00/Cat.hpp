/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:22:21 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/01 20:36:15 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string type);
        Cat(Cat const &input);
        Cat & operator=(Cat const &input);
        virtual ~Cat();

        virtual void makeSound() const;
};