/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:26:27 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/15 17:20:49 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string hum_name) : name(hum_name), weapon(NULL)
{
	std::cout << this->name << " spawned" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " hurt himself and is k.o" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->name << " is attacking with " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
	std::cout << this->name << " takes " << this->weapon->getType() << std::endl;
}