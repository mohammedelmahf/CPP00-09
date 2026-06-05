/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_help.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:23:29 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:37:11 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HELP_HPP
#define PHONEBOOK_HELP_HPP

#include "Phonebook.hpp"
#include <iostream>

std::string	add_spaces(int n);
std::string	fix_width(std::string str, long unsigned max);
int	search_ui(Contact contacts[8]);

#endif
