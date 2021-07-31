/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:17:21 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 19:31:01 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;
public:
    Karen();
    ~Karen();
    
    void complain(std::string level) const;
};

#endif