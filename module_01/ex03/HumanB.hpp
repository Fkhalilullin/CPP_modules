/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:38:48 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 16:22:43 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;   
    Weapon *_weapon;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon& weapon);
};

#endif 