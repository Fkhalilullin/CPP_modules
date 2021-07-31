/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:39:01 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:23:50 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->_name = "NoName";
}

HumanB::HumanB(std::string name) 
{
    this->_name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout << this->_name <<" attacks with his " 
    << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}