/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:06 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/25 19:23:16 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Glumanda("Glumanda"); // string constructor
	ClapTrap shadow_pika; //void constructor
	ClapTrap Glumanda_clone(Glumanda); // copy constructor
	shadow_pika = ClapTrap Pikachu("Pikachu"); // string constructor + assignment constructor
	// ClapTrap Pikachu("Pikachu");
	// shadow_pika = Pikachu;
	shadow_pika.attack("Glumanda");
	Glumanda.takeDamage(2);

	return (0);
}