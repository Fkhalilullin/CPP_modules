/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:20:55 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:22:27 by mteressa         ###   ########.fr       */
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
    arr[count].AddFirstName();
}