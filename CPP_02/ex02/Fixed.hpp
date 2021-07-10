/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:33:31 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/10 16:22:45 by mteressa         ###   ########.fr       */
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
    
    Fixed & operator=(Fixed const & rhs);
    
    
    Fixed	operator+(const Fixed & rhs) const;
	Fixed	operator-(const Fixed & rhs) const;
	Fixed	operator*(const Fixed & rhs) const;
	Fixed	operator/(const Fixed & rhs) const;

	bool	operator>(const Fixed & rhs) const;
	bool	operator<(const Fixed & rhs) const;
	bool	operator>=(const Fixed & rhs) const;
	bool	operator<=(const Fixed & rhs) const;
	bool	operator==(const Fixed & rhs) const;
	bool	operator!=(const Fixed & rhs) const;

	Fixed &	operator++(void);
	Fixed &	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed &			min(Fixed & a, Fixed & b);
	static const Fixed &	min(const Fixed & a, const Fixed & b);
	static Fixed &			max(Fixed & a, Fixed & b);
	static const Fixed &	max(const Fixed & a, const Fixed & b);
    
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