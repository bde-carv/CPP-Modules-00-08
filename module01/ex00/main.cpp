/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:31:02 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/13 18:16:22 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
	Zombie zombie_stack = Zombie("stack zombie");
	zombie_stack.announce();

	Zombie *zombie_heap = new Zombie("heap zombie");
	zombie_heap->announce();
	delete zombie_heap;

	randomChump("random stack zombie");

	return (0);
}