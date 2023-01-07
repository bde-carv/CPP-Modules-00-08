/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:46:22 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 18:09:52 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>


class Animal
{
	private:
	
	protected:
		std::string _type;
	
	public:
		Animal(void);
		Animal(Animal const &obj);
		Animal& operator=(Animal const &obj);
		virtual ~Animal(void);

		virtual void makeSound() const;
		std::string getType() const;
};

#endif