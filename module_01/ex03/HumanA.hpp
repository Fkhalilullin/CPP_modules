/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:38:22 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:06:43 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;   
    Weapon *_weapon;
public:
    HumanA();
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack();
};

#endif 