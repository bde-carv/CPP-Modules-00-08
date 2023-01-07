/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:40:48 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 18:10:05 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(Dog &obj);
		Dog& operator=(Dog const &obj);
		Dog(std::string idea);
		virtual ~Dog(void);

		void set_type(void);
		virtual void makeSound(void) const;

		void add_idea_to_brain(int i, std::string idea);
		std::string get_idea(int i) const;
};

#endif