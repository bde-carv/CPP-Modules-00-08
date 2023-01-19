/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:17:49 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/18 17:00:06 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

#include <ctype.h> // std::stoi
#include <stdio.h>
#include <iostream> // std::fixed

class Conversion
{
	private:
		char *_input;

	public:
		Conversion();
		Conversion(const Conversion& obj);
		Conversion(char *input);
		~Conversion();
		Conversion& operator=(const Conversion& obj);

		void to_float(char *input);
		void to_int(char *input);
		void to_char(char *input);
		void to_double(char *input);
		
};

#endif