/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:05:07 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/10 20:05:40 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class contact
{

	
	public:
		std::string first_name;
		std::string last_name;
		std::string number;
		std::string nickname;
		std::string secret;
		contact(){};
};

class phonebook
{
	private:
		contact persons[8];
		int index;
		void add_contact(int index);
		void searchcontact(int index);
		void searchdetail(int index);
	public:
		phonebook()
			index = 0;
		~phonebook()
			std::cout << "thanks for playing\n";

		void add();
		void search();	
};

#endif