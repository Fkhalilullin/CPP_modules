/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:28:58 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 18:58:27 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap trap_1("Terminator");

    std::cout << "Name: " << trap_1.getNameDiamondTrap() << std::endl;
    std::cout << "Energy: " << trap_1.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << trap_1.getAttackDamage() << std::endl;
    std::cout << "HP: " << trap_1.getHitpoints() << std::endl;
    
    trap_1.whoAmI();
    trap_1.attack("R2D2");
    trap_1.guardGate();
    trap_1.highFivesGuys();
    
    return 0;
}