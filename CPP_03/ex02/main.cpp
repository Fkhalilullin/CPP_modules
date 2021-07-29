/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:28:58 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 11:42:40 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap trap_1("Terminator");
    FragTrap trap_2;
    
    std::cout << "Name: " << trap_1.getName() << std::endl;
    std::cout << "Energy: " << trap_1.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << trap_1.getAttackDamage() << std::endl;
    std::cout << "HP: " << trap_1.getHitpoints() << std::endl;
    
    std::cout << "Name: " << trap_2.getName() << std::endl;
    std::cout << "Energy: " << trap_2.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << trap_2.getAttackDamage() << std::endl;
    std::cout << "HP: " << trap_2.getHitpoints() << std::endl;
    
    trap_2 = trap_1;
    std::cout << "Name: " << trap_2.getName() << std::endl;

    trap_2.attack("R2D2");
    std::cout << "Energy: " << trap_2.getEnergyPoints() << std::endl;
    
    trap_2.takeDamage(4);
    trap_2.beRepaired(3);
    
    trap_1.takeDamage(10);
    std::cout << "HP: " << trap_1.getHitpoints() << std::endl;
    
    trap_1.highFivesGuys();
    
    return 0;
}