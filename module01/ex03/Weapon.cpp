/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:40:46 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/15 16:42:50 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanA.hpp"

Weapon::Weapon(std::string weapon_type)
{
	std::cout << weapon_type << " is spawning\n";
	this->type = weapon_type;
}

Weapon::~Weapon(void)
{
	
}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string new_type)
{
	std::cout << "a new weapon(" << new_type << ") is spawned\n";
	this->type = new_type;
}

