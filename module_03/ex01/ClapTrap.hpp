/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:31:17 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/28 18:53:32 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    
public:

    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    
    ClapTrap & operator=(ClapTrap const &rhs);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string     getName(void) const;
    unsigned int    getHitpoints(void) const;
    unsigned int    getEnergyPoints(void) const;
    unsigned int    getAttackDamage(void) const;
    
protected:

    std::string     _name;
    unsigned int    _hitpoints;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;
    
};

#endif