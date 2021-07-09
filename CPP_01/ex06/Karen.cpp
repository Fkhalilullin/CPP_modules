/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:47:49 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 19:51:21 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};
Karen::~Karen(){};

void Karen::debug(void) const
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout <<  "I love to get extra baconfor my"
    << "7XL-double-cheese-triple-pickle-special-ketchup burger."
    << "I just love it!" << std::endl;
}

void Karen::info(void) const
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extrabacon cost more money." 
    << "You don’t put enough!" 
    << "If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void) const
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." 
    << "I’ve beencoming here for years and you just"
    << "started working here last month." << std::endl;
}

void Karen::error(void) const
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable," 
    <<"I want to speak to the manager now." << std::endl;
}

void Karen::complain(int level) const
{
    switch (level) {
		case 1 :
			this->debug();
		case 2 :
			this->info();
		case 3 :
			this->warning();
		case 4 :
			this->error();
			break;
		default :
			std::cout << "Error level" << std::endl;
			break;
	}
}