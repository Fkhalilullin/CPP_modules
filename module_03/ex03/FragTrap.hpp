/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:33:55 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 18:49:40 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: virtual public ClapTrap
{

public:

    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    
    FragTrap & operator=(FragTrap const &rhs);
    
    void attack(std::string const &target);
    void highFivesGuys();

    unsigned int getAttackDamageFragTrap();
    unsigned int getHitpointsFragTrap();
    
private:
    unsigned int _attack_damage_fragTrap;
    unsigned int _hitpoints_fragTrap;


};

#endif