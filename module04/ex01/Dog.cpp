/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:42:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/05 20:38:04 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Dog class funcs

Dog::Dog(void)
{
	std::cout << "Dogs void constructor\n";
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &obj) : Animal()
{
	*this = obj;
	std::cout << "Dog copy constructor\n";
}

Dog& Dog::operator=(Dog const &obj)
{
	std::cout << "Dog assignment constructor\n";
	Animal::operator=(obj);
	return(*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor\n";
	delete this->_brain;
}

void Dog::set_type(void)
{
	this->_type = "Dog";
}

void Dog::makeSound(void) const
{
	std::cout << "Dog makes wau wau\n";
}
