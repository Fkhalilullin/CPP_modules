/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:57:15 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/06 18:40:49 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    std::string name;
    std::string number;
    
    int N;
    std::cout << "Input zombie name: ";
    std::getline(std::cin, name);
    std::cout << "Input number zombies: ";
    std::cin >> N;
    if (N <= 0)
    {
        std::cout << "N less than 0, sorry :(" << std::endl;
        return (0);
    }
    Zombie* horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)    
        horde[i].announce();   
    delete [] horde;
    return (0);
}
