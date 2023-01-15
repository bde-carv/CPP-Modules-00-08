/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:52:38 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 18:54:52 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// constructor/deconstrucor
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45),  _target("default")
{
	std::cout << "robotomy void constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExec())
{
	std::cout << "robotomy copy constructor\n";
	//*this = obj;
	this->_target = obj.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	std::cout << "robotomy assignment constructor\n";
	this->_target = obj.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "robotomy destructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy Form", 72, 45), _target(target)
{
	std::cout << "robotomy string constructor\n";
}
// constructor deconstrucor end

// methods
std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{

		if (this->getSigning() == false)
		{
			throw AForm::FormNotSignedException();
		}
		else if (executor.getGrade() > this->getGradeExec())
		{
			throw AForm::GradeTooLowException();
		}

	
	std::cout << "Robotomy: Drilling Noise\n";
	int random_num = std::rand();
	if (random_num % 2 == 0)
		std::cout << this->getTarget() << " was successfully robotomized\n";
	else
		std::cout << "Robotomization failed\n";
}	