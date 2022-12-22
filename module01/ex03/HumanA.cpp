/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:49:23 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/15 17:09:49 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
* initializer list:
*/
HumanA::HumanA(std::string hum_name, Weapon &weapon_type) : name(hum_name), weapon(weapon_type)
{
	std::cout << this->name << " spawned with a " << this->weapon.getType() << std::endl;
}

/*
* cannot do this->type humanA only has a weapon class
* but not a type variable (is in Weapon class)
*/
HumanA::~HumanA()
{
	std::cout << this->name << " hurt himself and is k.o" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " is attacking with a " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &new_weapon)
{
	this->weapon = new_weapon;
}