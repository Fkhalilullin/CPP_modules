/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:57:01 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/06 20:30:26 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "unistd.h"
Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombieArray = new Zombie[N];

    for(int i = 0; i < N; i++)
        zombieArray[i].getName(name);
    return (zombieArray);
}