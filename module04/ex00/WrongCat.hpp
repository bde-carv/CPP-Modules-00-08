/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:08:54 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 20:56:36 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat (WrongCat const &obj);
	WrongCat& operator=(WrongCat const &obj);
	~WrongCat(void);

	void set_type(void);
	void makeSound(void) const;
};

#endif
