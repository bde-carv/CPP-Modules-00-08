/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:39:23 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 19:19:50 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat; // needed so we can use the Bureaucrat class in this Form class

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_exec;
	
	public:
		AForm();
		AForm(const AForm& obj);
		AForm(std::string _name, const int _grade_sign, const int _grade_exec);
		~AForm();
		AForm& operator=(const AForm& obj);

		std::string getName() const;
		bool getSigning() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void beSigned(Bureaucrat& bur);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("AForm:grade is too high\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("AForm:grade is too low\n");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("AForm: form is not signed\n");
				}
		};

		virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& COUT, const AForm& obj);

#endif