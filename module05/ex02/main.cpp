/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:06 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/15 15:44:57 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"


int main()
{
	// Bureaucrat
	std::cout << "[Create Bureaucrat]:\n";
	Bureaucrat bur1("Bur1",4);
	std::cout << std::endl;
	//Tests Shrubbery
	std::cout << "[Test Shrubbery]:\n";
	std::cout << std::endl;
	ShrubberyCreationForm shrub1("Shrub1");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[Shrubbery: Test of execution unsigned]\n";
	bur1.executeForm(shrub1);
	std::cout << std::endl;
	std::cout << "[Shrubbery: Test of signing]\n";
	bur1.signForm(shrub1);
	try
	{
		shrub1.beSigned(bur1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "[Shrubbery: operator<<]\n";
	std::cout << shrub1 << std::endl;
	std::cout << std::endl;
	std::cout << "[Shrubbery: Test of execution signed]\n";
	bur1.executeForm(shrub1);
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
//_________________________________
	// Tests Presidential
	std::cout << "[Test Presidential]:\n";
	std::cout << std::endl;
	PresidentialPardonForm presi1("Presi1");
	std::cout << std::endl;
	std::cout << "[Presidential: Test of execution unsigned]\n";
	bur1.executeForm(presi1);
	std::cout << std::endl;
	std::cout << "[Presidential: Test of signing]\n";
	bur1.signForm(presi1);
	try
	{
		presi1.beSigned(bur1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "[Presidential: operator<<]\n";
	std::cout << presi1 << std::endl;
	std::cout << std::endl;
	std::cout << "[Presidential: Test of execution]\n";
	bur1.executeForm(presi1);
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
	// Tests Robotomy
	std::cout << "[Test Robotomy]:\n";
	std::cout << std::endl;
	RobotomyRequestForm robot1("Robot1");
	std::cout << std::endl;
	std::cout << "[Robotomy: Test of execution unsigned]\n";
	bur1.executeForm(robot1);
	std::cout << std::endl;
	std::cout << "[Robotomy: Test of execution unsigned]\n";
	bur1.executeForm(shrub1);
	std::cout << std::endl;
	std::cout << "[Robotomy: Test of signing]\n";
	bur1.signForm(robot1);
	try
	{
		robot1.beSigned(bur1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "[Robotomy: operator<<]\n";
	std::cout << robot1 << std::endl;
	std::cout << std::endl;
	std::cout << "[Robotmy: Test of execution signed] (50/50chance)\n";
	bur1.executeForm(robot1);
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
	std::cout << std::endl;	
	// Test <<operator
	// std::cout << "[Test <<operator overload]:\n";
	// std::cout << shrub1 << std::endl;
	// std::cout << presi1 << std::endl;
	// std::cout << robot1 << std::endl;
	// std::cout << bur1 << std::endl;
	// std::cout << std::endl;
	
	std::cout << "[Destructors:]\n";
	std::cout << std::endl;

	return (0);
}


// int main()
// {
// 	// Constructors
// 	std::cout << std::endl;
// 	std::cout << "CONSTRUCTING:" << std::endl;
// 	std::cout << "----------------------------" << std::endl;

// 	Bureaucrat				bob("Bob", 1);
// 	Bureaucrat				bill("Bill", 142);
// 	ShrubberyCreationForm	shrub("shrub");
// 	RobotomyRequestForm		robo("robo");
// 	PresidentialPardonForm	president("president");
// 	std::cout << std::endl << std::endl;
// 	//-----------------------------------------------------


// 	// Executing
// 	// ShrubberyCreationForm : sign 145, exec 137
// 	// RobotomyRequestForm sign 72, exec 45
// 	// PresidentialPardonForm sign 25, exec 5

// 	std::cout << "SHRUBBERY CREATION FORM:" << std::endl;
// 	std::cout << "----------------------------" << std::endl;


// 	std::cout << std::endl << "[UNSIGNED]" << std::endl;
// 	bob.executeForm(shrub);
// 	shrub.beSigned(bob);


// 	std::cout << std::endl << "[SIGNED]" << std::endl;
// 	bob.executeForm(shrub);
// 	std::cout << std::endl;


// 	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
// 	bill.executeForm(shrub);
// 	std::cout << std::endl << std::endl;
// 	//-----------------------------------------------------


// 	std::cout << std::endl;
// 	std::cout << "ROBOTOMY REQUEST FORM:" << std::endl;
// 	std::cout << "----------------------------" << std::endl;
// 	std::cout << std::endl << "[UNSIGNED]" << std::endl;
// 	bob.executeForm(robo);
// 	robo.beSigned(bob);


// 	std::cout << std::endl << "[SIGNED (50% failure chance)]" << std::endl;
// 	bob.executeForm(robo);
// 	bob.executeForm(robo);
// 	bob.executeForm(robo);
// 	bob.executeForm(robo);
// 	bob.executeForm(robo);
// 	std::cout << std::endl;


// 	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
// 	bill.executeForm(robo);
// 	std::cout << std::endl << std::endl;
// 	//-----------------------------------------------------


// 	std::cout << std::endl;
// 	std::cout << "PRESIDENTIAL PARDON FORM:" << std::endl;
// 	std::cout << "----------------------------" << std::endl;


// 	std::cout << std::endl << "[UNSIGNED]" << std::endl;
// 	bob.executeForm(president);
// 	president.beSigned(bob);


// 	std::cout << std::endl << "[SIGNED]" << std::endl;
// 	bob.executeForm(president);
// 	std::cout << std::endl;


// 	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
// 	bill.executeForm(president);
// 	std::cout << std::endl << std::endl;
// 	//-----------------------------------------------------


// 	std::cout << std::endl;
// 	std::cout << "DESTRUCTORS:" << std::endl;
// 	std::cout << "----------------------------" << std::endl;
// 	return (0);
// 	//-------------------------------------------------------	

// }