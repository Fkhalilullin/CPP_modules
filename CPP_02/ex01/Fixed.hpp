/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:33:31 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/10 14:46:40 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    
public:

    Fixed(void);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed(void);
    
    Fixed(Fixed const &src);
    
    Fixed & operator=(Fixed const &rhs);
    
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    
    float   toFloat(void) const;
    int     toInt(void) const;
    
private:

    int                 _value;
    static const int    _number_of_fractional_bits;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif