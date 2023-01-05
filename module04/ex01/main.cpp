/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:13:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/05 21:00:58 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int i;
	Animal *animal_array[4];

	i = 0;
	// fill first half of array with dogs and second half with cats
	std::cout << "CONSTRUCTORS\n";
	while (i <= 3)
	{
		if (i <= 1)
			animal_array[i] = new Dog;
		else
			animal_array[i] = new Cat;
		i++;
	}
	std::cout << std::endl;
	
	
	std::cout << "DECONSTRUCTORS\n"
	// delete each animal(dog or cat) in the array
	i = 0;
	while (animal_array[i] && i <= 3)
	{
		delete animal_array[i];
		i++;
	}


	return (0);
}


