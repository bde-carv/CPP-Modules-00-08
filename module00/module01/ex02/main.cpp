/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:17:27 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/14 18:51:04 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
* referecnes dont have an own address. they are bound
* to the variable their were initialized with;
* taking the address of a reference (&reference) will give
* the address of the variable;
* THE REFERENCE IS THE REFERENT;
*/
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "VALUES" << std::endl;
	std::cout << "value of str: " <<  str << std::endl;
	std::cout << "value pointed to by stringPTR: " <<  *stringPTR << std::endl;
	std::cout << "value stored in stringREF: " <<  stringREF << std::endl;
	std::cout << "\n";
	std::cout << "STORED ADDRESSES" << std::endl;
	std::cout << "\n";
	std::cout << "memory address of str: " <<  &str << std::endl;
	std::cout << "address stored in stringPTR: " <<  stringPTR << std::endl;
	std::cout << "address stored in stringREF: " <<  &stringREF << std::endl;
	std::cout << "\n";
	std::cout << " OWN ADDRESSES" << std::endl;
	std::cout << "address of stringPTR: " <<  &(stringPTR) << std::endl;
	std::cout << "address of stringREF: " <<  "references dont have an adress" << std::endl;

	return (0);	
}
