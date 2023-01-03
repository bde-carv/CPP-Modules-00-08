/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:09:22 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 21:08:54 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{	
	protected:
		std::string _type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &obj);
		WrongAnimal& operator=(WrongAnimal const &obj);
		virtual ~WrongAnimal(void);

		void makeSound() const;
		std::string getType() const;
};

#endif