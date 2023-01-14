/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:59:13 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 20:11:38 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


// constructor/deconstrucor
PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential Form", 25, 5),  _target("default")
{
	std::cout << "preseidential void constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExec())
{
	std::cout << "presidential copy constructor\n";
	//*this = obj;
	this->_target = obj.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	std::cout << "presidential assignment constructor\n";
	this->_target = obj.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "presidential destructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Form", 25, 5), _target(target)
{
	std::cout << "presidential string constructor\n";
}

// constructor deconstrucor end

// methods
std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
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
			std::cout << "PresidentialPardon: granted for:" << this->getTarget() << std::endl;
		}
	
}	
