/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:42:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 17:03:28 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Dog class funcs

Dog::Dog(void)
{
	std::cout << "Dogs void constructor\n";
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog &obj) : Animal()
{
	//*this = obj;
	this->_brain = new Brain(obj.get_idea(0));
	std::cout << "Dog copy constructor\n";
}

Dog::Dog(std::string idea)
{
	this->add_idea_to_brain(0, idea);
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

void Dog::add_idea_to_brain(int i, std::string idea)
{
	this->_brain->add_idea(i, idea);
}

std::string Dog::get_idea(int i) const
{
	return (this->_brain->get_idea(i));
}
