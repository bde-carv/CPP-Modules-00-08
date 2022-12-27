/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:03:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/27 16:39:43 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

/*
* protected: is like private oonly difference is that
* derived classes can access the protected(private) attributes;
* virtual: prevents compiler from being confused when havin the 
* same function in a derived class;
*/
class ClapTrap
{
	protected:
		std::string _name;
		int _HP;
		int _EP;
		int _AD;
	
	public:
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(std::string new_name);
		ClapTrap(ClapTrap const &obj);
		ClapTrap& operator=(ClapTrap const &obj);
		virtual ~ClapTrap(void);

				int get_AD(void) const;
				int get_HP(void) const;
				int get_EP(void) const;
		std::string get_name(void) const;
		
};

#endif