/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:06:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 17:48:42 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/*
* here flesh_reekers point to the first element
* of an Zombie-array of size [n];
* i < n: [n] = 5 means indexes 0,1,2,3,4 ;
*/
Zombie *zombieHorde(int n, std::string name)
{
	int i;
	i = 0;

	Zombie *flesh_reekers = new Zombie[n];

	while (i < n)
	{
		flesh_reekers[i].give_name(name);
		i++;
	}
	return (flesh_reekers);
}