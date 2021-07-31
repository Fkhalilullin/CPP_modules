/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:48:45 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:12:00 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    this->_type = "hand";
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
    return(this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
