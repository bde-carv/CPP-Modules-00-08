/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:25:29 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/15 16:53:00 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string hum_name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &new_weapon);

	private:
		std::string name;
		Weapon *weapon;
};

#endif