/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:18:40 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/06 15:10:14 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name 
    << " risen from the dead" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Oh My God! They killed " 
    << this->_name << " BASTARDS!!!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}