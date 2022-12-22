/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:04:57 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/22 18:49:07 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed
{
	private:
		int _fixedPoint;
		static const int _fract;
	public:
	// constructors
		Fixed(void);
		Fixed(Fixed const & obj);
		Fixed(const int num_int);
		Fixed(const float num_float);
		Fixed& operator=(Fixed const & obj);
		~Fixed(void);
	// methods
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
	// operator overloading methods
		bool operator==(const Fixed &a) const;
		bool operator!=(const Fixed &a) const;
		bool operator>(const Fixed &a) const;
		bool operator>=(const Fixed &a) const;
		bool operator<(const Fixed &a) const;
		bool operator<=(const Fixed &a) const;

		Fixed operator+(const Fixed &a);
		Fixed operator-(const Fixed &a);
		Fixed operator/(const Fixed &a);
		Fixed operator*(const Fixed &a);

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int dummy); // post
		Fixed operator--(int dummy); // post
		
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif
