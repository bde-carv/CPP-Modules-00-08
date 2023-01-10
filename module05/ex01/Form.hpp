/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:39:23 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/10 20:58:58 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat; // needed so we can use the Bureaucrat class in this Form class

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_exec;
	
	public:
		Form();
		Form(const Form& obj);
		Form(std::string _name, const int _grade_sign, const int _grade_exec);
		~Form();
		Form& operator=(const Form& obj);

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
					return("Form:grade is too high\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Form:grade is too low\n");
				}
		};
};

std::ostream& operator<<(std::ostream COUT, Form& obj);

#endif