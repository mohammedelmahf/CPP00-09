/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:52 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:37:26 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

int main(void)
{
    Phonebook ph;
    std::string cmd;
    
    while(cmd != "EXIT")
    {
        std::cout << "Entre a command (ADD , SEARCH , EXIT): ";
        std::getline(std::cin, cmd);
        if(cmd == "ADD")
            ph.add();
            //std::cout << "ADD done" << std::endl;
        else if(cmd == "SEARCH")
            ph.search();
        if(std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }   
    }
    return (0);
}
