/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:39:58 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 18:10:08 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
	Cat(void);
	Cat (Cat &obj);
	Cat& operator=(Cat const &obj);
	virtual ~Cat(void);

	void set_type(void);
	virtual void makeSound(void) const;

	void add_idea_to_brain(int i, std::string idea);
	std::string get_idea(int i) const;
	
};

#endif
