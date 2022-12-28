/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:13 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 18:21:17 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors
FragTrap::FragTrap(void) : ClapTrap()
{
	this->_AD = 30;
	this->_HP = 100;
	this->_EP = 100;
	std::cout << "[FragTrap default constructor]\n";
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap()
{
	*this = obj;
	this->_name = this->_name /*+ "_clone"*/;
	std::cout << "[FragTrap copy constructor]\n";
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << "[FragTrap assignment constructor]\n";

	return (*this);
}

FragTrap::FragTrap(std::string new_name) : ClapTrap()
{
	this->_name = new_name;
	this->_AD = 30;
	this->_HP = 100;
	this->_EP = 100;
	std::cout << "[FragTrap string constructor]\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap deconstructor]:" << this->_name << std::endl;
}

// Methods

void FragTrap::highFivesGuys(void)
{
	if (this->_HP <= 0)
		std::cout << this->_name << ": cant high five: no HP\n";
	else if (this->_EP <= 0)
		std::cout << this->_name << ": cant high five: no EP\n";
	else
		std::cout << this->_name << ": High Five\n";
}
