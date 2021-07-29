/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:57:07 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 16:43:38 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    
    std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) , FragTrap(name), ScavTrap(name) {
    ClapTrap::_name = name + "_clap_name";
    
    this->_name = name;
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
     std::cout << "Default  DiamondTrap constructor with " << this->_name << " name called" << std::endl;
}


DiamondTrap::DiamondTrap(DiamondTrap const &src) {
    
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    *this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs) {
    
    this->_name = rhs.getName();
    this->_attack_damage = rhs.getAttackDamage();
    this->_energy_points = rhs.getEnergyPoints();
    this->_hitpoints = rhs.getEnergyPoints();
    return *this;
}

void DiamondTrap::attack(std::string const &target) {
    
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}