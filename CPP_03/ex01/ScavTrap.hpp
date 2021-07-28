/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:51:32 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/28 19:51:50 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:

    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    
    ScavTrap & operator=(ScavTrap const &rhs);

    void guardGate();
        
};