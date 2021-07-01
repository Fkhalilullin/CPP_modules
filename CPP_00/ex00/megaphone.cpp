/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:38:13 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:00:14 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(av[i])
        {
            j = 0;
            while (av[i][j])
            {
                std::cout << (unsigned char)std::toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}