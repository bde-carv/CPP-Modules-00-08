/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:24:24 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/14 19:09:41 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	
	public:

		std::string getName() const;
		int getGrade() const;
		void increment_grade();
		void decrement_grade();

		Bureaucrat();
		Bureaucrat(std::string new_name, int new_grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();

		//ex01
		void signForm(AForm& form);
		
		/*
		* what(): returns a string that identifies the exception;
		* throw(): specifies the exceptions thrown from this function;
		*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is to high\n");
				}
				
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is to low\n");
				}
				
		};

		// ex02
		void executeForm(AForm const& aform);
};

/*
* operator overloading << as global function;
* capital COUT just for differentiation to cout;
* 1st param: left operand, 2nd param: right operand;
*/
std::ostream& operator<<(std::ostream& COUT, Bureaucrat& obj);


#endif