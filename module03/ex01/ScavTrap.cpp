/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:13:56 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 18:00:08 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// constuctors

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "default";
	this->_AD = 20;
	this->_EP = 50;
	this->_HP = 100;

	std::cout << "ScavTrap default constructor\n";
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	this->_AD = 20;
	this->_EP = 50;
	this->_HP = 100;
	this->_name = new_name;
	std::cout << "ScavTrap string constructor: " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap()
{
	*this = obj;
	this->_name = this->_name;
	std::cout << "ScavTrap Copy constructor:" << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	// this->_name = obj.get_name();
	// this->_EP = obj.get_EP();
	// this->_AD = obj.get_AD();
	// this->_HP = obj.get_HP();


	ClapTrap::operator=(obj);

	std::cout << "[ScavTrap Assignment Constructor:]";
	std::cout << this->_name << std::endl;
	
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << ": ScavTrap deconstructor\n";
}

// Methods

void ScavTrap::attack(std::string const & target)
{
	if (this->get_HP() == 0)
		std::cout << "ScavTrap cant attack: 0 HP\n";
	else if (this->get_EP() == 0)
		std::cout << "ScavTrap cant attack: 0 EP\n";
	else
	{
		std::cout << this->_name << " attacks " << target << \
					" causing " << this->get_AD() << " damage!\n";
		
		this->_EP--;
		
	}
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " has entered Gatekeeper Mode\n";
}
