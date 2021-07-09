/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:38:27 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:11:05 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
    this->_name = "NoName";
}
HumanA::HumanA(std::string name, Weapon& weapon) 
{
    this->_name = name;
    this->_weapon = &weapon;
}
HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->_name <<" attacks with his " 
    << _weapon->getType() << std::endl;
}
