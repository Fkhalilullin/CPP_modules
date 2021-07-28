/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:31:15 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/28 21:06:02 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("NoName")
{
    this->_hitpoints = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->_hitpoints = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "Default  ClapTrap constructor with " << this->_name << " name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    this->_name = rhs.getName();
    this->_attack_damage = rhs.getAttackDamage();
    this->_energy_points = rhs.getEnergyPoints();
    this->_hitpoints = rhs.getEnergyPoints();
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name 
        << " attacks " << target <<" , causing " 
        << this->_attack_damage << " points of damage! " << std::endl;
    this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitpoints -= amount;   
    if(this->_hitpoints == 0)
    {
        std::cout << "I'm dead " << std::endl;
        return ;
    }
    else
    {
        std::cout << "AAAAAAAaaaAAAa " << "I take " << amount << " damage ";
        std::cout << "I have " << this->_hitpoints << " hitpoints" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points == 0)
    {
        std::cout << "I haven't energy " << std::endl;
        return ;
    }
    std::cout <<"Oh God thank you " << "I take " << amount << " heals ";
    this->_hitpoints += amount;
    std::cout << "I have " << this->_hitpoints << " hitpoints" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getHitpoints(void) const
{
    return this->_hitpoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return this->_energy_points;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return this->_attack_damage;
}
