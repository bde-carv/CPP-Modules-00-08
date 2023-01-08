/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:26 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/08 19:50:07 by bde-carv         ###   ########.fr       */
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
	jon.increment_grade();
	std::cout << "Jon grade after increment: " << jon.getGrade() << std::endl;
	jon.decrement_grade();
	std::cout << "Jon gradeafter decrement: " << jon.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[<< operator overload]\n";
	
	std::cout << jon << std::endl;
	std::cout << std::endl;
	


	return (0);
}