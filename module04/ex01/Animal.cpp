/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:45:57 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 19:59:48 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Animal class funcs

Animal::Animal(void) : _type("default animal")
{
	std::cout << "Animal void constructor\n";
}

Animal::Animal(Animal const &obj)
{
	*this = obj;
	std::cout << "Animmal copy constructor\n";
}

Animal& Animal::operator=(Animal const &obj)
{
	this->_type = obj._type;
	std::cout << "Animal assignment constructor\n";
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor\n";
}

void Animal::makeSound(void) const
{
	std::cout << this->getType() << " makes noise: Gyyyaaah\n";
}

std::string Animal::getType(void) const
{
	return (this->_type);
}