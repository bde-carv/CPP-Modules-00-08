/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:09:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/10 21:41:50 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// canonical form 
Form::Form() : _name("default"), _signed(false), _grade_sign(0) , _grade_exec(0)
{
	std::cout << "Form void constructor: " << this->getName() << std::endl;
}

Form::Form (const Form& obj) : _name(obj._name), _signed(false), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec)
{
	std::cout << "Form copy constructor\n";
	*this = obj; // why this not sufficient?
}

Form& Form::operator=(const Form& obj)
{
	std::cout << "Form assignment constructor\n";
	//this->_name = obj.getName(); // why not possible its both string?
	this->_signed = obj.getSigning();
	// this->_grade_sign = obj.getGradeSign();
	// this->_grade_exec = obj.getGradeExec();
	return(*this);
}

Form::Form(std::string _name, const int _grade_sign, const int _grade_exec) : \
			_name(_name), _signed(false), _grade_sign(_grade_sign), _grade_exec(_grade_exec)
{
	std::cout << "Form custom constructor: " << this->getName() << std::endl;

	try
	{
		if (this->getGradeExec() > 150 || this->getGradeSign() > 150)
		{
			throw Form::GradeTooLowException();
		}
		else if (this->getGradeExec() < 1 || this->getGradeSign() < 1)
		{
			throw Form::GradeTooHighException();
		}
	}
	catch (const std::exception& except)
	{
		std::cout << except.what();
	}
}

Form::~Form()
{
	std::cout << "Form destructor: " << this->getName() << std::endl;
}
// canonical form end

// getters
std::string Form::getName() const
{
	return(this->_name);
}

bool Form::getSigning() const
{
	return(this->_signed);
}

int Form::getGradeSign() const
{
	return(this->_grade_sign);
}

int Form::getGradeExec() const
{
	return(this->_grade_exec);
}
// getters end

// functions

void Form::beSigned(Bureaucrat& bur)
{
	// try
	// {
		if (bur.getGrade() > this->getGradeSign())
		{
			throw Form::GradeTooLowException();
		}
		else
		{
			std::cout << bur.getName() << ": signing successful\n";
			this->_signed = true;
		}
	//}
	// catch (std::exception& except)
	// {
	// 	std::cout << "signing not possible because \n";
	// 	std::cout << except.what() << std::endl;
	// }
}

// << overloading
std::ostream& operator<<(std::ostream& COUT, Form& obj)
{
	std::cout << "Name of form: " << obj.getName() << std::endl;
	std::cout << "Status of signing: " << obj.getSigning() << std::endl; 
	std::cout << "_grade_sign: " << obj.getGradeSign() << std::endl;
	std::cout << "_grade_exec: " << obj.getGradeExec() << std::endl;
	
	return(COUT);
}
