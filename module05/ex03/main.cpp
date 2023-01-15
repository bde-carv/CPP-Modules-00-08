/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:56:52 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/15 20:33:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
	std::cout << "[Test robo]\n";
	Intern intern1;
	AForm* form1;
	form1 = intern1.makeForm("RobotomyRequestForm", "Bott1");
	std::cout << std::endl;
	std::cout << "-----------------------------------\n";
	std::cout << "[Test presi]\n";
	Intern intern2;
	AForm* form2;
	form2 = intern2.makeForm("PresidentialPardonForm", "Prezz1");
	std::cout << std::endl;
	std::cout << "-----------------------------------\n";
	std::cout << "[Test shrub]\n";
	Intern intern3;
	AForm* form3;
	form3 = intern3.makeForm("ShrubberyCreationForm", "Shrubby1");
	std::cout << std::endl;
	std::cout << "-----------------------------------\n";
	std::cout << "[Test fail]\n";
	Intern intern4;
	AForm* form4;
	form4 = intern4.makeForm("Paperwork", "wurst");
	std::cout << std::endl;
	std::cout << "-----------------------------------\n";
	std::cout << std::endl;
	std::cout << "[Destructors]\n";
	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return (0);
}