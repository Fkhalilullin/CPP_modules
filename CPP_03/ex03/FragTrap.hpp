/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:33:55 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/29 16:15:33 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

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
};

#endif