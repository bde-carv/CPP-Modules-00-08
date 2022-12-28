/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 18:18:37 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// Constructors
	std::cout << std::endl;
	ScavTrap trap1("Dragon");
	ScavTrap trap2("Green-Knight");
	ScavTrap trap3(trap1);
	// ScavTrap trap3;
	// trap3 = trap1;
	ScavTrap trap4 = trap2;

	std::cout << std::endl;

	// trap1 test
	trap1.attack("Puppet");
	trap1.takeDamage(90);
	trap1.beRepaired(10);
	trap1.guardGate();

	std::cout << std::endl;

	// trap2 test
	trap2.attack("Puppet");
	trap2.takeDamage(50);
	trap2.beRepaired(22);
	trap2.guardGate();
	
	std::cout << std::endl;

	// trap3 Dragon clone test
	trap3.attack("Puppet");
	trap3.takeDamage(50);
	trap3.beRepaired(10);
	trap3.guardGate();

	std::cout << std::endl;

	// trap4
	trap4.attack("Puppet");
	trap4.takeDamage(20);
	trap4.beRepaired(80);
	trap4.guardGate();

	std::cout << std::endl;
	return (0);
}
