/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:42 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:37:02 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include "Phonebook_help.hpp"

class Phonebook
{
    private:
        Contact _contact[8];
        int _index;
    
    public:
        Phonebook(void);
        ~Phonebook(void);
        void add(void);
        void search(void);
        void print(Contact contact);
        /*GETTERS*/
        Contact get_contact(int index);
};
#endif
