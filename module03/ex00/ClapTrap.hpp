/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:03:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/26 17:52:48 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _HP;
		int _EP;
		int _AD;
	
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(std::string new_name);
		ClapTrap(ClapTrap const &obj);
		ClapTrap& operator=(ClapTrap const &obj);
		~ClapTrap(void);

				int get_AD(void) const;
				int get_HP(void) const;
				int get_EP(void) const;
		std::string get_name(void) const;
		
};

#endif