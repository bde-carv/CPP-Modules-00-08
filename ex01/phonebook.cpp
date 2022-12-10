/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:14:08 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/10 19:59:53 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"

void phonebook::add(void)
{
	int i = 0;
	
	if (index == 8)
	{
		while (i < index)
		{
			persons[i - 1] = persons[i];
			i++;
		}
		index--;
	}
	index++;
	add_contact(index);
}

void phonebook::add_contact(int index)
{
	//contact& contact = persons[index];

	std::cout << "put first name: ";
	std::cin >> persons[index].first_name;
	
	std::cout << "put last name: ";
	std::cin >> persons[index].last_name;

	std::cout << "put nick name: ";
	std::cin >> persons[index].nickname;

	std::cout << "put phone nr.: ";
	std::cin >> persons[index].number;

	std::cout << "put secret: ";
	std::cin >> persons[index].secret;
}

/*
* std::cin.eof() is for ctrl+c;
* std::cin.ignore(1000, '\n') : ignore the next 1000chars in the input or
* until '\n' is found;
*/
int main(void)
{
	std::string cmd;
	phonebook book;
	
	std::cout << "What do you want to do? (ADD,SEARCH,EXIT)\n";

	while (1)
	{
		std::cout << "input:  ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.add();
			
		}
		else if (cmd == "SEARCH")
		{
			
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
