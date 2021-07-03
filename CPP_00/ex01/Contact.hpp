/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:21:26 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/01 19:14:07 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact();
    ~Contact();
    void AddFirstName();
    void AddLastName();
    void AddNickname();
    void AddPhoneNumber();
    void AddDarkestSecret();
    void PrintList();
    void PrintInfo(int index);
};

#endif
