/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:39:58 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 21:13:03 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
	Cat(void);
	Cat (Cat const &obj);
	Cat& operator=(Cat const &obj);
	~Cat(void);

	void set_type(void);
	virtual void makeSound(void) const;
};

#endif
