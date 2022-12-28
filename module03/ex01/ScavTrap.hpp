/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:13:30 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/28 17:44:31 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

/*
* Scavtrap is now from type ScavTrap and ClapTrap
* ScavTrap inherits everything from ClapTrap, public means
* everything public in base class will also be public in
* the derived class and what was protected will be also protected,
* private means everything inherited is private in the derived class,
* protected means everything inherited in the derived class will be protected;
* ScavTrap can't access private members in ClapTrap;
*/
class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap& operator=(const ScavTrap &obj);
		~ScavTrap(void);
		
		void attack(std::string const & target);
		void guardGate();
};

#endif