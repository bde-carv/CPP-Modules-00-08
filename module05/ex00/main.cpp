/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:26 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/09 19:31:30 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "[too high too low]\n";
	Bureaucrat hans("Hans", 160);
	Bureaucrat karen("Karen", -12);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[increment/decrement]\n";
	Bureaucrat jon("Jon", 15);
	std::cout << "Jon grade before increment: " << jon.getGrade() << std::endl;
	jon.increment_grade();
	std::cout << "Jon grade after increment: " << jon.getGrade() << std::endl;
	std::cout << std::endl;
	std::cout << "Jon grade before decrement: " << jon.getGrade() << std::endl;
	jon.decrement_grade();
	std::cout << "Jon grade after decrement: " << jon.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[increment/decrement with too high too low]\n";
	Bureaucrat mia ("Mia", 1);
	mia.increment_grade();
	Bureaucrat mike ("Mike", 150);
	mike.decrement_grade();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[<< operator overload]\n";
	std::cout << jon << std::endl;

	std::cout << std::endl;
	std::cout << "[Deconstructors]\n";
	std::cout << std::endl;
	return (0);
}