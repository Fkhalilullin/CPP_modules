/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:51:02 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/10 15:16:15 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_number_of_fractional_bits = 8;

Fixed::Fixed(void) : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) 
{
    std::cout << "Int constuctor called" << std::endl;
	this->_value = value * (1 << Fixed::_number_of_fractional_bits);
}

Fixed::Fixed(float const value) 
{
    std::cout << "Float constuctor called" << std::endl;
	this->_value = (int)(roundf(value 
    * (1 << Fixed::_number_of_fractional_bits)));
}


Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function is called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function is called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / 
    (float)(1 << Fixed::_number_of_fractional_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value / (1 << Fixed::_number_of_fractional_bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}