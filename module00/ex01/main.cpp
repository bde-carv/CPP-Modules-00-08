/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:22:16 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/11 20:04:21 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

/*
* std::cin.eof() is for ctrl+c;
* std::cin.ignore(1000, '\n') : ignore the next 1000chars in the input or
* until '\n' is found;
*/
int main(void)
{
	std::string cmd;
	phonebook book;
	
	std::cout << "What do you want to do?\n";
	std::cout << "Valid commands: ADD,SEARCH,EXIT\n";

	while (1)
	{
		std::cout << "Give me orders:  ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.add();
		}
		else if (cmd == "SEARCH")
		{
			book.search();
		}
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "invalid input\n";
		
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return (0);
	}
}
