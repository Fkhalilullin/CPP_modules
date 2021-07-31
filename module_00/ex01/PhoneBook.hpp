/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:58:35 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:17:09 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp" 
#include <iomanip>

class PhoneBook
{
    private:
        Contact arr[8];
        int count;
    public:
        PhoneBook();
        ~PhoneBook();
        
        void AddContact();
        void SearchContact();
};

#endif

