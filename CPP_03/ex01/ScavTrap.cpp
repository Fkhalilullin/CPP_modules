/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:58:50 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/28 19:56:44 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
     std::cout << "Default  ScavTrap constructor with " << this->_name << " name called" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
    this->_name = rhs.getName();
    this->_attack_damage = rhs.getAttackDamage();
    this->_energy_points = rhs.getEnergyPoints();
    this->_hitpoints = rhs.getEnergyPoints();
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap in Gate keeper mode" << std::endl;
}
