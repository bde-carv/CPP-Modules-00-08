/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:21:40 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/13 18:16:12 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/*
* creates a zombie on the stack which is
* done just like any other variable declaration;
*/
void randomChump(std::string name)
{
	Zombie Zombie_chump = Zombie(name);
	Zombie_chump.announce();
}
