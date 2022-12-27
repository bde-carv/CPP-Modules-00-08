/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/26 16:13:25 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "constructors: \n";
	ClapTrap Glumanda("Glumanda"); // string constructor
	ClapTrap shadow_pika; //void constructor
	ClapTrap Glumanda_clone(Glumanda); // copy constructor
	ClapTrap S_Pikachu("Shadow Pikachu"); // string constructor 
	shadow_pika = S_Pikachu; // + assignment constructor
	std::cout << "constructors end\n";
	std::cout << std::endl;
	
	std::cout << "[Test 1]: attack, damage, heal\n";
	shadow_pika.attack("Glumanda");
	Glumanda.takeDamage(2);
	Glumanda.beRepaired(2);
	std::cout << std::endl;

	std::cout << "[Test 2]: HP already 0\n";
	Glumanda.attack("Shadow Pikachu");
	shadow_pika.takeDamage(10);
	std::cout << "Glumanda falls into rage\n";
	std::cout << "Glumanda's attack velocity increases!\n";
	Glumanda.attack("Shadow Pikachu");
	shadow_pika.takeDamage(10);
	shadow_pika.attack("Glumanda");
	shadow_pika.beRepaired(5);

	std::cout << std::endl;

	

	return (0);
}