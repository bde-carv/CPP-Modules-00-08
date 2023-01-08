/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/08 19:57:16 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor\n";
}

/*
* the exeception related code must be in a try block
* in the try block: if a certain condition is met we use a throw param
* what ever is being thrown, we cath it with catch right after the try block
*/
Bureaucrat::Bureaucrat(std::string new_name, int new_grade) : _name(new_name)
{
	std::cout << "Bureaucrat constructor with name: "<< this->getName() << std::endl;
	try
	{
		if (new_grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (new_grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = new_grade;
	}
	catch(const std::exception& except)
	{
		std::cout << except.what();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	std::cout << "Bureaucrat copy constructor\n";
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	std::cout << "Bureaucrat assignment constructor\n";
	this->_grade = obj.getGrade();
	this->_name = obj.getName();

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor destructing " << this->getName() << std::endl;
}

void Bureaucrat::increment_grade()
{
	this->_grade = this->_grade - 1;

	if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement_grade()
{
	this->_grade = this->_grade + 1;

	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream& operator<<(std::ostream& COUT, Bureaucrat& obj)
{
	std::cout << obj.getName() << " is a bureaucrat with grade " << obj.getGrade() << std::endl;
	return (COUT);
}