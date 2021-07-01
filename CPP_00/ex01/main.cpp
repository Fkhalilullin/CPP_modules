/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:31:31 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:19:39 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string cmd; 
    PhoneBook phonebook;
    while (1)
    {
        std::cout << "Enter command: ";
        std::cin >> cmd;
        if (!cmd.compare("EXIT"))
            return (0);
        else if (!cmd.compare("ADD"))
            phonebook.AddContact();
        else if (!cmd.compare("SEARCH"))
        {
            //хуита
        }
        else
            std::cout << "Wrong command :( ";
        std::cout << std::endl;
    }
    return (0);   
}