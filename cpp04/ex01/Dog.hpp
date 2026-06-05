/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:47:51 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:56:47 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_own_brain;
    public :
        Dog();
        Dog(std::string type);
        Dog(Dog const &input);
        Dog & operator=(Dog const &input);
        virtual ~Dog();

        virtual void makeSound() const;
        std::string getIdea(int idea_nr) const;
        void        setIdea(int idea_nr, std::string idea);
};