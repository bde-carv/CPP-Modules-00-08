/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:39:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/05 20:37:46 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat class funcs

Cat::Cat(void) : Animal()
{
	std::cout << "Cat void constructor\n";
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &obj) : Animal()
{
	*this = obj;
	std::cout << "Cat copy constructor\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor\n";
	delete this->_brain;
}

Cat& Cat::operator=(Cat const &obj)
{
	std::cout << "Cat assignment constructor\n";
	Animal::operator=(obj);
	return (*this);
}

void Cat::set_type(void)
{
	this->_type = "Cat";
}

void Cat::makeSound(void) const
{
	std::cout << "Cat makes meow meow\n";
}
