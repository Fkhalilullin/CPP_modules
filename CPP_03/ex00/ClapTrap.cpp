/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:31:15 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/10 20:48:03 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("NoName")
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
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
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap" << this->_name 
        << " attacks " << target <<" , causing " 
        << this->_attack_damage << " points of damage! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitpoints == 0)
    {
        std::cout << "I'm dead " << std::endl;
        return ;
    }
    else
    {
        std::cout <<"AAAAAAAaaaAAAa " << "I take " << amount << " damage ";
        this->_hitpoints -= amount;   
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{

    std::cout <<"Oh God thank you" << "I take " << amount << " heals ";
    this->_hitpoints += amount;   
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
