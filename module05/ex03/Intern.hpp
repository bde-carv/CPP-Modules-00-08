/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:53:25 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/15 20:10:45 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern& obj);
		~Intern();
		Intern& operator=(const Intern& obj);
		
		AForm* makeForm(std::string form_name, std::string form_target);
		// AForm* makeshrub(std::string target);
		// AForm* makepresi(std::string target);
		// AForm* makerobot(std::string target);

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form not found\n");
				}
		};
};

#endif