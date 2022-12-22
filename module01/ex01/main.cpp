/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:15:05 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 17:51:52 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/*
* delete[] = deallocatoin of memory of an array 
* created by new[] and calling of destructors;
*/
int main(void)
{
	int n = 5;
	int i = 0;
	
	std::string name = "flesh_reeker_soldier";
	
	Zombie *zombie_horde = zombieHorde(n, name);

	while (i < n)
	{
		zombie_horde[i].announce();
		i++;
	}
	delete[] zombie_horde;
	return (0);
}
