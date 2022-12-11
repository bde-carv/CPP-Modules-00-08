/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:14:08 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/11 20:41:58 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

/*
* contact &contact = persons[index]: reference(address) to a pointer
* it means we create a class of type contact which is called contact
* at the address of this contact we put persons[index]. it is not
* a pointer but just a normal class of type contact;
*/
void phonebook::add_contact(int index)
{
	contact &contact = persons[index];

	std::cout << "put first name: ";
	std::cin >> contact.first_name;
	
	std::cout << "put last name: ";
	std::cin >> contact.last_name;

	std::cout << "put nick name: ";
	std::cin >> contact.nickname;

	std::cout << "put phone nr.: ";
	std::cin >> contact.number;

	std::cout << "put secret: ";
	std::cin >> contact.secret;
}

/*
* determines where to add a contact;
* moves everything one to the left and in
* this way deletes the oldest entry(= always the first entry);
* then index-- because we have entry less;
*/
void phonebook::add(void)
{
	if (index == 8)
	{
		for (int i = 1; i < index; i++)
			persons[i - 1] = persons[i];
		index--;
	}
	add_contact(index++);
}

/*
* lists all contacts so that user can choose which one to 
* display in more detail;
*/
void phonebook::list_contacts(int index)
{
	contact &contact = persons[index];

	std::cout << "|";
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << shorten(contact.first_name) << "|";
	std::cout << std::setw(10) << shorten(contact.last_name) << "|";
	std::cout << std::setw(10) << shorten(contact.nickname) << "|" << std::endl;
}

/*
* searches all information for a specific contact
* defined by user by putting in the index nr;
*/
void phonebook::search_contact(int index)
{
	contact &contact = persons[index];

	std::cout << "first name: " << contact.first_name << std::endl;
	std::cout << "last name: " << contact.last_name << std::endl;
	std::cout << "nickname: " << contact.nickname << std::endl;
	std::cout << "number: " << contact.number << std::endl;
	std::cout << "secret: " << contact.secret << std::endl;
}

/*
* setw(n) : define max size of input/output field and puts the output
* into the last positions from the right side on;
* index_target--; because the persons[8] array starts at 0;
*/
void phonebook::search(void)
{
	int index_target;
	int i;

	i = 0;

	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << "|\n";

	while (i < index)
	{
		list_contacts(i);
		i++;
	}

	std::cout << "put in index of target:";
	std::cin >> index_target;
	if (index_target > 8)
	{
		std::cout << "outside range\n";
		return;
	}
	index_target--;
	if (index == 0)
		std::cout << "phonebook empty\n";
	else if (index_target <= index && index_target >= 0)
		search_contact(index_target);
}
