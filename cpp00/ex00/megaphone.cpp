/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:28 by maelmahf          #+#    #+#             */
/*   Updated: 2025/10/19 14:36:13 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char *av[])
{
    int i;
    int j;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    j = -1;
    while(ac > 1 && av && av[++j])
    {
        i = -1;
        while(j > 0 &&av[j][++i])
            std::cout << (char)toupper(av[j][i]);
    }
    std::cout << std::endl;
    return 0;
}
