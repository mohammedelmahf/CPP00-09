/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:59 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:37:29 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_fname(void) const
{
    return(this->_fname);
}

std::string Contact::get_lname(void) const 
{
    return(this->_lname);
}

std::string Contact::get_nickname(void) const
{
    return(this->_nickname);
}

std::string Contact::get_phonenumber(void) const
{
    return(this->_phone_numbr);
}

std::string Contact::get_darksecret(void) const
{
    return(this->_darksecret);
}

void        Contact::set_fname(std::string str)
{
    this->_fname = str;
}

void        Contact::set_lname(std::string str)
{
    this->_lname = str;
}

void        Contact::set_nickname(std::string str)
{
    this->_nickname = str;
}

void        Contact::set_phonenumber(std::string str)
{
    this->_phone_numbr = str;
}

void        Contact::set_darksecret(std::string str)
{
    this->_darksecret = str;
}
