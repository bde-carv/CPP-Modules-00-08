/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:17:38 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/19 18:05:12 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

// canonical start
Conversion::Conversion()
{
	std::cout << "Conversion void constructor\n";
}

Conversion::Conversion(const Conversion& obj)
{
	std::cout << "Conversion copy constructor\n";
	this->_input = obj._input;
}

Conversion::~Conversion()
{
	std::cout << "Conversion desttructor\n";
}

Conversion& Conversion::operator=(const Conversion& obj)
{
	std::cout << "Conversion assignment constructor\n";
	this->_input = obj._input;
	return(*this);
}

Conversion::Conversion(char *input) : _input(input)
{
	std::cout << "Conversion: Char* constructor\n";
	std::cout << "...converting..." << std::endl;
	
	this->to_char(this->_input);
	this->to_int(this->_input);
	this->to_float(this->_input);
	this->to_double(this->_input);
}
// canonical end

// conversion methods

void	Conversion::to_char(char *_input)
{
	try
	{
		int _input_conv = std::stoi (_input);

		if (isprint(_input_conv) != 0)
		{
			std::cout << "char is printable: " << std::cout << _input << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << "char is not printable\n";
			std::cout << std::endl;
		}
	}
	catch (const std::exception& except)
	{
		std::cout << "conversion to char not possible due to: ";
		std::cerr << except.what() << std::endl;
		std::cout << std::endl;
	}
}

/*
* static_cast<Type*>(param) : is like regular typecasting
*/
void	Conversion::to_int(char *_input)
{
	try
	{
		int _input_conv = std::stoi(_input);
		
		std::cout << "the int is: " << static_cast<int>(_input_conv) << std::endl;
		//std::cout << "the int is: " << _input_conv << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "conversion to int not possible because: ";
		std::cerr << e.what() << '\n';
		std::cout << std::endl;
	}
	
}

/*
* std::fixed : is a manipulator placed "on top" of the outputstream
* the values will be printed with as many digits in the decimal part
* as specified in std::cout.precision();
*/
void	Conversion::to_float(char *_input)
{
	try
	{
		float input_conv = std::stof(_input);
		std::cout << std::fixed;
		std::cout.precision(1);
		
		std::cout << "the float is: " << static_cast<float>(input_conv) << "f" << std::endl;
		//std::cout << "the float is: " << input_conv << "f" << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "conversion to float not possible because: " << std::endl;
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
	
}

void	Conversion::to_double(char *_input)
{
	try
	{
		double input_conv = std::stod(_input);
		std::cout << std::fixed;
		std::cout.precision(1);
		
		std::cout << "the double is: " << static_cast<double>(input_conv) << std::endl;
		//std::cout << "the double is: " << input_conv << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "conversion to double not possible because: ";
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
}
// conversion methods end