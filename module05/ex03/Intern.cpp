/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:59:06 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/15 20:38:40 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Intern void constructor\n";
}

Intern::Intern(const Intern& obj)
{
	std::cout << "Intern copy constructor\n";
	*this = obj;
}

Intern::~Intern()
{
	std::cout << "Intern destructor\n";
}

Intern& Intern::operator=(const Intern& obj)
{
	std::cout << "Intern assignment operator\n";
	(void)obj;
	return(*this);
}

static AForm* makeshrub(std::string target)
{
	AForm *shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

static AForm* makepresi(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm* makerobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

/*
* function pointer: return of func pointed to, (*name of funcPtr),
* parameters the function needs as input;
*/
AForm* Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string func_names[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	AForm* (*funcPtr[3])(std::string target) = {&makeshrub, &makepresi, &makerobot};

	AForm* result = NULL;
	
	for (int i = 0; i < 3; i++)
	{
		if (form_name == func_names[i]) // form_name.compare(form_target) why not working?
		{
			result = funcPtr[i](form_target);
			break;
		}
	}
	try
	{
		if (result != NULL)
		{
			std::cout << "Intern created: " << form_name << " with the target: " << form_target << std::endl;
		}
		else
		{
			std::cout << "Nothing was created: ";
			throw Intern::FormNotFoundException();
		}
	}
	catch (const std::exception& except)
	{
		std::cout << except.what() << std::endl;
	}
	return (result);
}