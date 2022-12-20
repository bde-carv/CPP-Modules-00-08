/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:12:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/20 17:55:06 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed(void)
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

/*
* copy constructor: is for initializing a new object/instance
* with the values of another object/instance of the same type;
* also known as copyinitialization;
*
* we can either copy the whole object (*this = obj) or
* customize which member attributes specifically we want
* to copy;
*
* difference to assignment constructor is that copy constructor
* DOES take memory because it is called when a new obj is being
* created. assignment constructor is used for re-initializing 
* an already existing object/instance with new values;
*
* with out copy constructor we would also change the original
* class when changing values in the new copied class;
*
* args for copy constructor should be const, so that it is not
* modified unintendedly;
*/
Fixed::Fixed(Fixed const & obj)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
{
	std::cout << "Copy constructor called\n";
	this->_fixedPoint = obj.getRawBits();
	
}

/*
* assignment constructor is used assigning new values to an
* already existing object;
* can be used to copy the whole ovject or certain member
* attributes only (need to be coded in the body then)
*/
Fixed& Fixed::operator=(Fixed const & obj)
{
	std::cout << "Assigment constructor called\n";
	this->_fixedPoint = obj.getRawBits();
	
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called\n";
}

/*
* getter function: is for accessing private member attributes
* of a class. 
* every private member attribute should have their own getter;
*/
int Fixed::getRawBits( void) const
{
	std::cout << "getter function called\n";
	return (this->_fixedPoint);
}

/*
* setter function: is for changing values of private member
* attributes of a class.
* every private member should have their own setter;
*/
void Fixed::setFixedPoint(int raw)
{
	std::cout << "setter function called\n";
	this->_fixedPoint = raw;
}
