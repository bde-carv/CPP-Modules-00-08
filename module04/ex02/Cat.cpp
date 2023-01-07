/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:39:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 17:28:55 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// Cat class funcs

Cat::Cat(void) : Animal()
{
	std::cout << "Cat void constructor\n";
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(Cat &obj) : Animal()
{
	//*this = obj;
	this->_brain = new Brain(obj.get_idea(0));
	std::cout << "Cat copy constructor\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor\n";
	delete this->_brain;
}

Cat& Cat::operator=(Cat const &obj)
{
	// if (this->_brain)
	// 	delete this->_brain;
	// this->_brain = obj._brain;
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

void Cat::add_idea_to_brain(int i, std::string idea)
{
	this->_brain->add_idea(i, idea);
}

std::string Cat::get_idea(int i) const
{
	return (this->_brain->get_idea(i));
}
