/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:10:52 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 17:34:39 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS
ClapTrap::ClapTrap(void) : _name("Shadow Ghost"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "[void constructor]: ";
	std::cout << "a mysterious " << this->_name << " appears!\n";
}

/*
* default constructor taking a string as parameter;
*/
ClapTrap::ClapTrap(std::string new_name)
{
	this->_name = new_name;
	this->_HP = 10;
	this->_EP = 10;
	this->_AD = 0;
	std::cout << "[string constructor]: ";
	if (this->_name.compare("Charmander") == 0)
	{

		std::cout << this->_name << " I choose you!\n";
	}
	else
	{
		// std::cout << this->_name << " reveals its true form!\n";
		std::cout << "A Pikachu comes out of the grass!\n";
		std::cout << this->_name << ": Pika Pikaaachuuu!\n";
	}
}

/*
* copy constructor for initializing a new obj/inst with the 
* values of another;
*/
ClapTrap::ClapTrap(ClapTrap const &obj)
{
	
	this->_name = obj.get_name() + "_clone";
	this->_AD = obj.get_AD();
	this->_EP = obj.get_EP();
	this->_HP = obj.get_HP();

	std::cout << "[copy constructor]: " << this->_name << " was cloned by cheat-modul\n";
	
}

/*
* assignment constructor: used for passing values
* of an obj/inst to another already existing obj/inst;
*/
ClapTrap& ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "[assignment constructor]: " << this->_name << " absorbs " << " Pikachu!\n";
	this->_name = obj.get_name() + "_absorbed";
	this->_AD = obj.get_AD();
	this->_EP = obj.get_EP();
	this->_HP = obj.get_HP();

	std::cout << this->_name << ": Grrrrrooooaaar!\n";
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	if ((this->_name.compare("Pikachu")) == 0 || (this->_name.compare("Pikachu_absorbed") == 0))
		std::cout << "[destructor]: " << this->get_name() << " is finished\n";
	else
		std::cout << "[destructor]:" << this->_name << " come back!\n";
}

// METHODS

void ClapTrap::attack(const std::string& target)
{
	if (this->_HP == 0)
	{
		std::cout << this->_name << " cant attack: 0 HP left\n";
	}
	else if (this->_EP == 0)
	{
		std::cout << this->_name << " can't attack: 0 EP left\n";
	}
	else
	{
		std::cout << this->_name << " attacks ";
		std::cout << target << " causing " << this->_AD << " damage" << std::endl;

		this->_EP--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << this->_name << " has already 0 HP \n";
	}
	else if ((this->_HP - (int)amount) >= 0)
	{
		std::cout << this->_name << " takes " << amount << " damage from sandstorm\n";
		this->_HP -= amount;
		std::cout << this->_name << " has " << this->_HP << " HP left\n";
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << this->_name << " can't repair: no HP left" << std::endl;
	}
	else if (this->_EP == 0)
	{
		std::cout << this->_name << " can't repair: no EP left\n";
	}
	else
	{
		std::cout << this->_name << " uses grace of gods to heal by " << amount << " points\n";
		this->_EP--;
	}
}

// GETTER FUNCTIONS

/*
* const at the end ensures that the value of this class is not
* changed;
*/
int ClapTrap:: get_AD(void) const
{
	return (this->_AD);
}

int ClapTrap:: get_EP(void) const
{
	return (this->_EP);
}

int ClapTrap:: get_HP(void) const
{
	return (this->_HP);
}

std::string ClapTrap:: get_name(void) const
{
	return (this->_name);
}
