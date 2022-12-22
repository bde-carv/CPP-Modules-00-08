/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:12:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/22 19:33:47 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed(void)
{
	this->_fixedPoint = 0;
	//std::cout << "Default constructor called\n";
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
	//std::cout << "Copy constructor called\n";
	this->_fixedPoint = obj.getRawBits();
	
}

/*
* assignment constructor is used assigning new values to an
* already existing object;
* can be used to copy the whole object or certain member
* attributes only (needs to be coded in the body then);
*/
Fixed& Fixed::operator=(Fixed const & obj)
{
	//std::cout << "Assigment constructor called\n";
	this->_fixedPoint = obj.getRawBits();
	
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "destructor called\n";
}

/*
* getter function: is for accessing private member attributes
* of a class. 
* every private member attribute should have their own getter;
* const at the end ensures that the value of this class is not
* changed;
*/
int Fixed::getRawBits( void) const
{
	//std::cout << "getter function called\n";
	return (this->_fixedPoint);
}

/*
* setter function: is for changing values of private member
* attributes of a class.
* every private member should have their own setter;
*/
void Fixed::setRawBits(int raw)
{
	//std::cout << "setter function called\n";
	this->_fixedPoint = raw;
}

/*
* constructor that takes a float converts it to 
* fixedpoint and stores it in the newly created instance;
* roundf: rounds a number to the closest int;
* <<: bitshift left, msb (most significant bits)
* are lost (left side) and a 0 is inserted on the right side;
* the left operand determines the number of places to shift;
*/
Fixed::Fixed (const float num_float)
{
	//std::cout << "Float to fixedpoint constructor\n";
	this->_fixedPoint = roundf(num_float * (1 << this->_fract));
}

/*
* constructor that takes an int and converts int to fixedpoint value;
* 
*/
Fixed::Fixed(const int num_int)
{
	//std::cout << "int to fixedpoint constructor\n";
	this->_fixedPoint = num_int << this->_fract;
} 

/*
* fixedpoint to float
*/
float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fract));
}

/*
* fixedpoint to int
*/
int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_fract);
}

/*
* overload of the insertion operator <<
* whenever we have 1st param << 2nd param
* this function will get called and thus
* only the here defined memebrs will be printed
* (toFloat);
*
* operator overloading functions must be global
* they can be only implemented as a member function
* if the left operand is inside the class 
* (left operand and overload function must be in the
* same class);
*/
std::ostream& operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// ==, !=, <, >, >=, <=

/*
* returns a bool (true/false) based on if the
* condition in the return() is true or not;
* const at end because we just compare and
* dont modify in this function;
*/
bool Fixed::operator==(const Fixed &a) const
{
	return (this->_fixedPoint == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
	return (this->_fixedPoint != a.getRawBits());
}

bool Fixed::operator>(const Fixed &a) const
{
	return (this->_fixedPoint > a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const
{
	return (this->_fixedPoint >= a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const
{
	return (this->_fixedPoint <= a.getRawBits());
}

bool Fixed::operator<(const Fixed &a) const
{
	return (this->_fixedPoint < a.getRawBits());
}

// +,-,*,/

Fixed Fixed::operator+(const Fixed &a)
{
	Fixed b;
	
	b.setRawBits(this->getRawBits() + a.getRawBits());
	return (b);
}

Fixed Fixed::operator-(const Fixed &a)
{
	Fixed b;

	b.setRawBits(this->toFloat() - a.toFloat());
	return (b);
}

Fixed Fixed::operator*(const Fixed &a)
{
	Fixed b;

	//b.setRawBits(this->getRawBits() * a.getRawBits());
	//b.setRawBits(this->toFloat() * a.toFloat());
	return (Fixed(this->toFloat() * a.toFloat()));
	//return (b);
}

Fixed Fixed::operator/(const Fixed &a)
{
	Fixed b;

	//b.setRawBits(this->getRawBits() / a.getRawBits());
	return (Fixed(this->toFloat() / a.toFloat()));
	return (b);
}

/*
* pre
*/
Fixed& Fixed::operator++(void)
{
	this->_fixedPoint++;
	return (*this);
}

/*
* pre
*/
Fixed& Fixed::operator--(void)
{
	this->_fixedPoint--;
	return (*this);
}

/*
* int dummy for differentiating
* between post/pre increment since
* they have the same operator;
* post
*/
Fixed Fixed::operator--(int dummy)
{
	(void)dummy;
	Fixed tmp(*this);
	 this->_fixedPoint--;
	return (tmp);
}

/*
* post
*/
Fixed Fixed::operator++(int dummy)
{
	(void)dummy;
	Fixed tmp(*this);
	this->_fixedPoint++;
	return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
