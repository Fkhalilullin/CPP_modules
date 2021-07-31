/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:20:55 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 17:51:48 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::AddContact()
{  
    if (count == 8)
    {
        std::cout << "PhoneBook is full" << std::endl;
        count--;
    }
    arr[count].AddFirstName();
    arr[count].AddLastName();
    arr[count].AddNickname();
    arr[count].AddPhoneNumber();
    arr[count].AddDarkestSecret();
    if (count != 8)
        count++;
}

void PhoneBook::SearchContact()
{
    int index;
    std::string str;

    std::cout << std::setw(10) << "index" << '|'
	<< std::setw(10) << "first name" << '|'
	<< std::setw(10) << "last name" << '|'
	<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count; ++i)
		arr[i].PrintInfo(i + 1);
    std::cout << "Enter desirable index: ";
	std::getline(std::cin, str);
	if (str.length() != 1 && !isdigit(str[0]))
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	index = str[0] - '0';
	if (index < 1 || index > count || index > 8)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	else
		arr[index - 1].PrintList();

}