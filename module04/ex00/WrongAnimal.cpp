/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:10:53 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 20:51:02 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Animal class funcs

WrongAnimal::WrongAnimal(void) : _type("default wrong animal")
{
	std::cout << "WrongAnimal void constructor\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	*this = obj;
	std::cout << "WrongAnimal copy constructor\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &obj)
{
	this->_type = obj._type;
	std::cout << "WrongAnimal assignment constructor\n";
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << " makes noise: buulieehhh\n";
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}