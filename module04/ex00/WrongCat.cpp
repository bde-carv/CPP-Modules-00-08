/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:15:36 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 20:55:03 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat void constructor\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal()
{
	*this = obj;
	std::cout << "WrongCat copy constructor\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor\n";
}

WrongCat& WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "WrongCat assignment constructor\n";
	WrongAnimal::operator=(obj);
	return (*this);
}

void WrongCat::set_type(void)
{
	this->_type = "WrongCat";
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makes meow meow\n";
}
