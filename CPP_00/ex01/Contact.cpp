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

Contact::Contact(){}
Contact::~Contact(){}

void Contact::AddFirstName()
{
    std::cout << "Write your first name: ";
    std::cin >> first_name;
}

void Contact::AddLastName()
{
    std::cout << "Write your last name: ";
    std::cin >> last_name;
}

void Contact::AddNickname()
{
    std::cout << "Write your nickname: ";
    std::cin >> nickname;
}

void Contact::AddPhoneNumber()
{
    std::cout << "Write your phone number: ";
    std::cin >> phone_number;
}


void Contact::AddDarkestSecret()
{
    std::cout << "Write your phone number: ";
    std::cin >> darkest_secret;
}