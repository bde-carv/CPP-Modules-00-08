/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/26 19:38:20 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap trap1("trap1");
	ScavTrap trap2("trap2");
	ScavTrap trap3(trap1);
	// ScavTrap trap3;
	// trap3 = trap1;

	std::cout << std::endl;

	trap1.attack("Puppet");
	trap1.takeDamage(150);
	trap1.beRepaired(10);
	trap1.guardGate();
	
	std::cout << std::endl;
	return (0);
}