/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 17:35:59 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "constructors: \n";
	ClapTrap Charmander("Charmander"); // string constructor
	ClapTrap shadow_ghost; //void constructor
	ClapTrap Charmander_clone(Charmander); // copy constructor
	ClapTrap S_Pikachu("Pikachu"); // string constructor 
	shadow_ghost = S_Pikachu; // + assignment constructor
	std::cout << "constructors end\n";
	std::cout << std::endl;
	
	std::cout << "[Test 1]: attack, damage, heal\n";
	shadow_ghost.attack("Charmander");
	Charmander.takeDamage(2);
	Charmander.beRepaired(2);
	std::cout << std::endl;

	std::cout << "[Test 2]: HP already 0\n";
	Charmander_clone.attack("Pikachu_absorbed");
	shadow_ghost.takeDamage(10);
	std::cout << "Charmander falls into rage\n";
	std::cout << "Charmander's attack velocity increases!\n";
	Charmander_clone.attack("Pikachu_absorbed");
	shadow_ghost.takeDamage(10);
	shadow_ghost.attack("Charmander");
	shadow_ghost.beRepaired(5);

	std::cout << std::endl;

	

	return (0);
}