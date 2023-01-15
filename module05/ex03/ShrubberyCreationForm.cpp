/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:46:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/15 19:01:55 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// constructor/deconstrucor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Form", 145, 137),  _target("default")
{
	std::cout << "shrubbery void constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExec())
{
	std::cout << "shrubbery copy constructor\n";
	//*this = obj;
	this->_target = obj.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	std::cout << "shrubbery assignment constructor\n";
	this->_target = obj.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "shrubbery destructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137), _target(target)
{
	std::cout << "shrubbery string constructor\n";
}
// constructor deconstrucor end

// methods
std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{

		if (this->getSigning() == false)
		{
			throw AForm::FormNotSignedException();
		}
		else if (executor.getGrade() > this->getGradeExec())
		{
			throw AForm::GradeTooLowException();
		}
		else
		{
				std::string	tree = 
									"     ccee88oo          \n"
									"  C8O8O8Q8PoOb o8oo    \n"
									" dOB69QO8PdUOpugoO9bD  \n"
									"CgggbU8OU qOp qOdoUOdcb\n"
									"   6OuU  /p u gcoUodpP \n"
									"      \\\\//  /douUP   \n"
									"        \\\\////       \n"
									"         |||/\\        \n"
									"         |||\\/        \n"
									"         |||||         \n"
									"  .....\\//||||\\....  \n";
									
			std::string filename = this->_target + "_shrubbery";
			std::fstream myFile;
			myFile.open(filename, std::ios::out); // ios::out :mode for writing into file and create if not existent
			if (myFile.is_open())
			{
				myFile << tree;
				
				myFile.close();
				std::cout << "shrubbery file created\n";
			}
			else
				std::cout << "file not open\n";
		}
	
}