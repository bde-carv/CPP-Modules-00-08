/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:30:33 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/11 20:31:46 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

/*
* constructor: initializes index variable;
*/
phonebook::phonebook()
{
	index = 0;
}

/*
* destructor: prints exit message;
*/
phonebook::~phonebook()
{
	std::cout << "thanks for playing\n";
}

/*
* shortens a string down to max 10 chars.
* overhang chars will be replaced with '.'
*/
std::string shorten(std::string str)
{
	std::string temp;
	
	if (str.length() >= 10)
	{
		temp = str.substr(0, 9);
		temp += ".";
	}
	else
		temp = str;
	
	return (temp);
}
