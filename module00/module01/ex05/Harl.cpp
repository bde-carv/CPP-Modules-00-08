/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:10:23 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/17 19:15:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl enters the room" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl leaves the room" << std::endl;
}

void Harl::debug()
{
	std::cout << "Harl complains about debug" << std::endl;
}

void Harl::info()
{
	std::cout << "Harl complains about info" << std::endl;
}

void Harl::warning()
{
	std::cout << "Harl complains about warning" << std::endl;
}

void Harl::error()
{
	std::cout << "Harl complains about error" << std::endl;
}


/*
* function pointer: return of func. pointed to (*pointer name) (params of func. pointed to) = name of ;
*/
void Harl::complain(std::string level)
{
	int i = 0;
	
	void (Harl::*funcs[4]) (void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			break;
		}
		i++;
	}
	if (i == 3)
	{
		std::cout << "Harl comlpains about nothing" << std::endl;
	}
}
