/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:05:07 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/12 17:51:04 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

/*
* class containing infos of a contact;
* ~ marks the destructor function;
*/
class contact
{	
	public:
		std::string first_name;
		std::string last_name;
		std::string number;
		std::string nickname;
		std::string secret;
		contact(){};
		~contact(){};
};

/*
* class resembling the phonebook;
* add() and search() are for taking the 
* command from the user then giving it 
* to the private functions for actual
* execution of the command;
*/
class phonebook
{
	private:
		contact persons[8];
		int index;
		void add_contact(int index);
		void list_contacts(int index);
		void search_contact(int index);
	public:
		phonebook();
		~phonebook();

		void add();
		void search();	
};

std::string shorten(std::string str);

#endif
