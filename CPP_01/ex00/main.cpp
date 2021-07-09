/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:13:14 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 17:58:47 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie zombie_1 = Zombie("Frankenstein");
    Zombie* zombie_2 = newZombie("Kenny");
    
    zombie_1.announce();
    zombie_2->announce();
    
    randomChump("Mteressa");
    
    delete zombie_2;
    return (0);
}