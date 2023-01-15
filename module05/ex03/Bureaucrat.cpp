/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 19:58:35 by bde-carv         ###   ########.fr       */
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
	//this->_name = obj.getName();

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor destructing " << this->getName() << std::endl;
}

void Bureaucrat::increment_grade()
{
	try
	{
		if (this->_grade == 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade += - 1;
	}
	catch (const std::exception &exc)
	{
		std::cout << "cant increment\n";
		std::cout << exc.what();
	}

	//this->_grade = this->_grade - 1;

	// if (this->getGrade() > 150)
	// 	throw Bureaucrat::GradeTooHighException();

	// if (this->getGrade() == 1)
	// 	throw Bureaucrat::GradeTooHighException();
	// else
	// 	this->_grade = this->_grade - 1;
}

void Bureaucrat::decrement_grade()
{
	try
	{
		if (this->_grade == 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade += + 1;
	}
	catch (const std::exception &excep)
	{
		std::cout << "can't decrement\n";
		std::cout << excep.what() << std::endl;
	}
		
	// 	std::cout << excep.what();
	// }
	// this->_grade = this->_grade + 1;

	// if (this->getGrade() < 1)
	// 	throw Bureaucrat::GradeTooLowException();

	// if (this->getGrade() == 150)
	// 	throw Bureaucrat::GradeTooLowException();
	// else
	// 	this->_grade += +1;
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

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "[signForm]: " << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& except)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cout << except.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& aform)
{
	try
	{
		aform.execute(*this);
		std::cout << "Bureaucrat: execution of " << aform.getName() << " successful\n";
	}
	catch (const std::exception& except)
	{
		std::cout << "Bureaucrat: execution of " << aform.getName() << " failed\n";
		std::cout << except.what() << std::endl;
	}
}
