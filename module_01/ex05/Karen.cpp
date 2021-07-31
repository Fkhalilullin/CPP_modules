/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:17:24 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 19:42:11 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};
Karen::~Karen(){};

void Karen::debug(void) const
{
    std::cout <<  "I love to get extra baconfor my"
    << "7XL-double-cheese-triple-pickle-special-ketchup burger."
    << "I just love it!" << std::endl;
}

void Karen::info(void) const
{
    std::cout << "I cannot believe adding extrabacon cost more money." 
    << "You don’t put enough!" 
    << "If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void) const
{
    std::cout << "I think I deserve to have some extra bacon for free." 
    << "I’ve beencoming here for years and you just"
    << "started working here last month." << std::endl;
}

void Karen::error(void) const
{
    std::cout << "This is unacceptable," 
    <<"I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) const
{
    void	(Karen::* ptrfunc) (void) const = &Karen::error;

	(!level.compare("debug") && (ptrfunc = &Karen::debug));
	(!level.compare("info") && (ptrfunc = &Karen::info));
	(!level.compare("warning") && (ptrfunc = &Karen::warning));
	(this->*ptrfunc) ();
}