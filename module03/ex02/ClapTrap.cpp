/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:10:52 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 18:23:50 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS
ClapTrap::ClapTrap(void) : _name("Shadow Ghost"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap:[void constructor]:" << std::endl;
	//std::cout << "a mysterious " << this->_name << " appears!\n";
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
	std::cout << "ClapTrap:[string constructor]: ";
	if (this->_name.compare("Charmande") == 0)
		std::cout << this->_name << " I choose you!\n";
	else
	{
		//std::cout << "its a Pikachu!\n";
		// std::cout << this->_name << ": Grrrroooaaarrr!\n";
		std::cout << "ClapTrap: " <<this->_name << std::endl;
	}
}

/*
* copy constructor for initializing a new obj/inst with the 
* values of another;
*/
ClapTrap::ClapTrap(ClapTrap const &obj)
{
	
	this->_name = obj.get_name();
	this->_AD = obj.get_AD();
	this->_EP = obj.get_EP();
	this->_HP = obj.get_HP();

	std::cout << "ClapTrap:[copy constructor]: " << "its a Pikachu!\n";
	
}

/*
* assignment constructor: used for passing values
* of an obj/inst to another already existing obj/inst;
*/
ClapTrap& ClapTrap::operator=(ClapTrap const &obj)
{
	// std::cout << "ClapTrap:[assignment constructor]: " << "Shadow Pikachu powers up!\n";
	std::cout << "ClapTrap:[assignment constructor]: " << std::endl;
	this->_name = obj.get_name() + "_clone";
	this->_AD = obj.get_AD();
	this->_EP = obj.get_EP();
	this->_HP = obj.get_HP();

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	if (this->_name.compare("Shadow Pikachu") == 0)
		std::cout << "ClapTrap:[destructor]: " << this->get_name() << " is finished\n";
	else
		std::cout << "ClapTrap:[destructor]:" << this->_name << " come back!\n";
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
	else if ((this->_HP - (int)amount) < 0)
	{
		std::cout << this->_name << " takes " << amount << " damage\n";
		this->_HP -= amount;
		std::cout << this->_name << " has " << " 0 " << " HP left\n";
	}
	else if ((this->_HP - (int)amount) >= 0)
	{
		std::cout << this->_name << " takes " << amount << " damage\n";
		this->_HP -= amount;
		std::cout << this->_name << " has " << this->_HP << " HP left\n";
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == 0 || this->_HP < 0)
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
		this->_HP += amount;
		std::cout << this->_name << " has " << this->_HP << " HP left.\n";
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
