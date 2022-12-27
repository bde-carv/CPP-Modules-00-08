/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/27 20:00:50 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// Constructors
	std::cout << std::endl;
	FragTrap frag1("Fighter");
	FragTrap frag2("Monster");
	/*ScavTrap trap3(trap1);*/
	FragTrap frag3;
	frag3 = frag1;
	FragTrap frag4(frag2);

	std::cout << std::endl;

	// frag1 test
	frag1.attack("Puppet");
	frag1.takeDamage(90);
	frag1.beRepaired(10);
	frag1.highFivesGuys();

	std::cout << std::endl;

	// frag2 test
	frag2.attack("Puppet");
	frag2.takeDamage(50);
	frag2.beRepaired(22);
	frag2.highFivesGuys();
	
	std::cout << std::endl;

	// frag3 Fighter clone test
	frag3.attack("Puppet");
	frag3.takeDamage(50);
	frag3.beRepaired(10);
	frag3.highFivesGuys();

	std::cout << std::endl;
	
	// frag4 Monster clone test
	frag4.attack("Puppet");
	frag4.takeDamage(50);
	frag4.beRepaired(10);
	frag4.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
