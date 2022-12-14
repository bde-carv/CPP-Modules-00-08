/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:10:51 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 19:46:39 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(std::string weapon_type);
		~Weapon();
		const std::string &getType();
		void setType(std::string new_type);
};

#endif