/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:33:27 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 18:07:55 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/*
* this: is a pointer to the current object instance
* that the calling method function belongs to;
*/
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "create zombie named: " << name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " got his head chopped off" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}