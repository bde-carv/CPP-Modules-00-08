/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:49:23 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 19:53:30 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string hum_name, Weapon &weapon_type)
{
	this->name = hum_name;
	weapon = weapon_type;

	std::cout << name << " spawned with a" << weapon << std::endl;
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	
}