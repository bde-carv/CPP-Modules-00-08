/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:06 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 20:13:15 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
	//Tests Shrubbery
	std::cout << "[Test Shrubbery]:\n";
	std::cout << std::endl;
	ShrubberyCreationForm shrub1("Shrub1");
	std::cout << std::endl;

	
//_________________________________
	// Tests Presidential
	std::cout << "[Test Presidential]:\n";
	std::cout << std::endl;
	PresidentialPardonForm presi1("Presi1");
	std::cout << std::endl;
	
	// Tests Robotomy
	std::cout << "[Test Robotomy]:\n";
	std::cout << std::endl;
	RobotomyRequestForm robot1("Robot1");
	std::cout << std::endl;

	// Bureaucrat Tests
	std::cout << "[Test Bureaucrat]:\n";
	Bureaucrat bur1("Bur1",4);
	std::cout << std::endl;




	// std::cout << std::endl;
	// std::cout << "[Presidential: Test of signing]\n";
	// bur1.signForm(presi1);
	// try
	// {
	// 	presi1.beSigned(bur1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << presi1 << std::endl;
	// std::cout << std::endl;

	// std::cout << std::endl;
	// std::cout << "[Presidential: Test of execution]\n";
	// bur1.executeForm(presi1);
	// std::cout << std::endl;
	
	// std::cout << std::endl;
	// std::cout << "[Shrubbery: Test of signing]\n";
	// bur1.signForm(shrub1);
	// try
	// {
	// 	shrub1.beSigned(bur1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << shrub1 << std::endl;
	// std::cout << std::endl;

	// std::cout << std::endl;
	// std::cout << "[Shrubbery: Test of execution]\n";
	// bur1.executeForm(shrub1);
	// std::cout << std::endl;
	
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