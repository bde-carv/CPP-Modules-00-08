/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:04:57 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/21 17:53:33 by bde-carv         ###   ########.fr       */
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
		Fixed(void);
		Fixed(Fixed const & obj);
		Fixed& operator=(Fixed const & obj);
		~Fixed(void);
		
		int getRawBits(void) const;
		void setFixedPoint(const int raw);

		Fixed(const int num_int);
		Fixed(const float num_float);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif
