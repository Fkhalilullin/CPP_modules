/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:21:16 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:21:28 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact(){}
Contact::~Contact(){}

void Contact::AddFirstName()
{
    std::cout << "Write your first name: ";
    std::getline(std::cin, first_name);
}

void Contact::AddLastName()
{
    std::cout << "Write your last name: ";
    std::getline(std::cin, last_name);
}

void Contact::AddNickname()
{
    std::cout << "Write your nickname: ";
    std::getline(std::cin, nickname);
}

void Contact::AddPhoneNumber()
{
    std::cout << "Write your phone number: ";
    std::getline(std::cin, phone_number);
}


void Contact::AddDarkestSecret()
{
    std::cout << "Write your darkest secret: ";
    std::getline(std::cin, darkest_secret);
}

void Contact::PrintList()
{
    std::cout << "First name: " << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nick name: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phone_number << std::endl;
    std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void	PrintWidthStr(std::string &str, bool pipe)
{
	if (str.length() >= 10)
		std::cout << std::setw(9) << str.substr(0, 9)
		<< '.';
	else
		std::cout <<std::setw(10) << str;
	if (pipe)
		std::cout << '|';
}

void	Contact::PrintInfo(int index)
{
	std::cout << std::setw(10) << index << '|';
	PrintWidthStr(this->first_name, true);
	PrintWidthStr(this->last_name, true);
	PrintWidthStr(this->nickname, false);
	std::cout << std::endl;
}