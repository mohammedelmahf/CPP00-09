/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:22:21 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:56:32 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_own_brain;
    public :
        Cat();
        Cat(std::string type);
        Cat(Cat const &input);
        Cat & operator=(Cat const &input);
        virtual ~Cat();

        virtual void makeSound() const;
        std::string getIdea(int idea_nr) const;
        void        setIdea(int idea_nr, std::string idea);
};