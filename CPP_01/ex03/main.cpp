/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:47:43 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:22:22 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <vector>

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
    
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("mega club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
              
    }
    return (0);
}