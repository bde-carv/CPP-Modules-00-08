/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:26 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/10 20:52:49 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "[creating Bureaucrats]" << std::endl;
	Bureaucrat Jon("Jon", 8);
	Bureaucrat Gal("Gal", 9);
	std::cout << std::endl;
	

	std::cout << std::endl;
	std::cout << "[Form with grades too low/high]" << std::endl;
	std::cout << std::endl;
	Form form1("Form_one", 151, 5);
	Form form2("Form_two", 5, 151);
	Form form3("Form_three", 0, 5);
	Form form4("Form_four", 5, 0);
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "[creating ok Forms]" << std::endl;
	Form form5("Form_five", 15, 16);
	Form& ref_form5 = form5;
	Form form6("Form_six", 7, 2);
	Form& ref_form6 = form6;

	Form form7;
	const Form& ref_form7 = form7;
	Form form8(ref_form7);
	
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[Signing ok]" << std::endl;
	Jon.signForm(ref_form5);
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "[Signing not ok]" << std::endl;
	Jon.signForm(ref_form6);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[<< operator overload]\n";
	std::cout << ref_form5 << std::endl;

	

	
	std::cout << "[Destructors]" << std::endl;
	return (0);
}