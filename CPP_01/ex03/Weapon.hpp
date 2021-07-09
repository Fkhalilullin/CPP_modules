/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:48:43 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 14:15:11 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    Weapon(std::string);
    ~Weapon();
    
    const std::string& getType();
    void   setType(std::string type);
};

#endif