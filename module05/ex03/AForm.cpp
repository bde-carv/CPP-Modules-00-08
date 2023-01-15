/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:09:11 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 19:28:39 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// canonical form 
AForm::AForm() : _name("default"), _signed(false), _grade_sign(0) , _grade_exec(0)
{
	std::cout << "AForm void constructor: " << this->getName() << std::endl;
}

AForm::AForm (const AForm& obj) : _name(obj._name), _signed(false), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec)
{
	std::cout << "AForm copy constructor\n";
	*this = obj;
}

AForm& AForm::operator=(const AForm& obj)
{
	std::cout << "Form assignment constructor\n";
	this->_signed = obj.getSigning();
	return(*this);
}

AForm::AForm(std::string _name, const int _grade_sign, const int _grade_exec) : \
			_name(_name), _signed(false), _grade_sign(_grade_sign), _grade_exec(_grade_exec)
{
	std::cout << "AForm custom constructor: " << this->getName() << std::endl;

	try
	{
		if (this->getGradeExec() > 150 || this->getGradeSign() > 150)
		{
			throw AForm::GradeTooLowException();
		}
		else if (this->getGradeExec() < 1 || this->getGradeSign() < 1)
		{
			throw AForm::GradeTooHighException();
		}
	}
	catch (const std::exception& except)
	{
		std::cout << except.what();
	}
}

AForm::~AForm()
{
	std::cout << "AForm destructor: " << this->getName() << std::endl;
}
// canonical form end

// getters
std::string AForm::getName() const
{
	return(this->_name);
}

bool AForm::getSigning() const
{
	return(this->_signed);
}

int AForm::getGradeSign() const
{
	return(this->_grade_sign);
}

int AForm::getGradeExec() const
{
	return(this->_grade_exec);
}
// getters end

// functions

void AForm::beSigned(Bureaucrat& bur)
{
	// try
	// {
		if (bur.getGrade() > this->getGradeSign())
		{
			throw AForm::GradeTooLowException();
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
std::ostream& operator<<(std::ostream& COUT, const AForm& obj)
{
	std::cout << "Name of Aform: " << obj.getName() << std::endl;
	std::cout << "Status of signing(0 no, 1yes): " << obj.getSigning() << std::endl; 
	std::cout << "_grade_sign: " << obj.getGradeSign() << std::endl;
	std::cout << "_grade_exec: " << obj.getGradeExec() << std::endl;
	return(COUT);
}
