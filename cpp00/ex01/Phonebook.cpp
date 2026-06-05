/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:48 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:41:51 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->_index = 0;
    std::cout << \
        "Welcome to Crappy! Created an empty phonebook for up to 8 contacts" \
        << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "See you soon!" << std::endl;
}

void Phonebook::add(void)
{
    std::string str;
    str = "" ;

    if(this->_index > 7)
        std::cout << "Warning : overwrting info about "
            << this->_contact[this->_index % 8].get_fname() << std::endl;
    
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter a first name : " ;
        if(std::getline(std::cin , str) && str != "")
            this->_contact[this->_index % 8].set_fname(str);
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << "'s last name : ";
        if(std::getline(std::cin , str) && str != "")
            this->_contact[this->_index % 8].set_lname(str);
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << "'s nickname : ";
        if(std::getline(std::cin , str) && str != "")
            this->_contact[this->_index % 8].set_nickname(str);
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << "'s phone number : ";
        if(std::getline(std::cin , str) && str != "")
            this->_contact[this->_index % 8].set_phonenumber(str);
    }
    str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << "'s darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->_contact[this->_index % 8].set_darksecret(str);
			std::cout << this->_contact[this->_index % 8].get_fname() << \
				" successfully added to phonebook [" << this->_index % 8 + 1 << "/8]" << std::endl;
		}
	}
    this->_index++;
}

Contact Phonebook::get_contact(int index)
{
    return(this->_contact[index % 8]);
}

void    Phonebook::print(Contact contact)
{
    std::cout << std::endl << "Requesting contact information..." << std::endl;
    if(!contact.get_fname().size())
    {
        std::cout << "Failed to get infro for this conatct" << std::endl;
    }
    std::cout << "First Name : " << contact.get_fname() << std::endl;
    std::cout << "Last Name : " << contact.get_lname() << std::endl;
    std::cout << "Nickename : " << contact.get_nickname() << std::endl;
    std::cout << "Phone Number : " << contact.get_phonenumber() << std::endl;
    std::cout << "Darksecret : " << contact.get_darksecret() << std::endl;
}

void	Phonebook::search(void)
{
	std::string	str;

	if (!search_ui(this->_contact))
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_contact[str[0] - 1 - '0'].get_fname().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->_contact[str[0] - 1 - '0']);
}
