/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:55:56 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 18:47:21 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("no_name")
{
    std::cout << "Zombie " << this->_name
    << " risen from the dead" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name
    << " risen from the dead" << std::endl;
}

Zombie::Zombie(int N, std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name
    << " risen from the dead" << std::endl;
    N = 0;
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

void Zombie::getName(std::string name)
{
    this->_name = name;
}
