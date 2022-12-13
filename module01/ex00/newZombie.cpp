/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:38:53 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/13 16:48:36 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/*
* allocates a zombie on the heap via "new"
* new allocates memory for a variable and
* returns a pointer to it;
*/
Zombie *newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}

