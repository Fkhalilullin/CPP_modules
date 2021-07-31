/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:33:57 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 11:41:38 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
     std::cout << "Default  FragTrap constructor with " << this->_name << " name called" << std::endl;
}


FragTrap::FragTrap(FragTrap const &src) {
    
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
    
    this->_name = rhs.getName();
    this->_attack_damage = rhs.getAttackDamage();
    this->_energy_points = rhs.getEnergyPoints();
    this->_hitpoints = rhs.getEnergyPoints();
    return *this;
}

void FragTrap::attack(std::string const &target) {
    
    std::cout << "FragTrap " << this->_name 
    << " attacks " << target <<" , causing " 
    << this->_attack_damage << " points of damage! " << std::endl;
    this->_energy_points -= 1;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap give fives :) " << std::endl;
}
