/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:17:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/15 17:03:17 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string hum_name, Weapon &weapon_type);
		~HumanA(void);
		
		void attack(void);
		void setWeapon(Weapon &new_weapon);

	private:
		std::string name;
		Weapon &weapon;
};

#endif