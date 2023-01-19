/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:05:38 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/18 17:05:09 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char** av)
{
	if (argc == 2)
	{
		Conversion myConv(av[1]);
	}
	else
	{
		std::cout << "wrong number of inputs\n";
	}

	std::cout << "thanks for playing\n";
	return (0);
}
