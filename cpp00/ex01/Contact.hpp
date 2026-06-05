/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:55 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:37:07 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
    std::string _fname;
    std::string _lname;
    std::string _nickname;
    std::string _phone_numbr;
    std::string _darksecret;
    
    public:
    Contact();
    ~Contact();
    std::string     get_fname(void) const;
    std::string     get_lname(void) const;
    std::string     get_darksecret(void) const;
    std::string     get_phonenumber(void) const;
    std::string     get_nickname(void) const;
    void            set_fname(std::string str);
    void            set_lname(std::string str);
    void            set_nickname(std::string str);
    void            set_phonenumber(std::string str);
    void            set_darksecret(std::string str);
};

#endif
