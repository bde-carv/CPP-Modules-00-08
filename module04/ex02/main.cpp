/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:13:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 18:15:34 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int i;
	Animal *animal_array[4];
	//Animal test;
	// Dog basic;
	// Dog tmp = basic;
	
	// basic.add_idea_to_brain(0,"gggg");
	// tmp.add_idea_to_brain(0,"fff");
	// std::cout << "tmp: " << tmp.get_idea(0) << std::endl;
	// std::cout << "basic: " << basic.get_idea(0) << std::endl;
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

	std::cout << "[Proof Dog Deep Copy]\n";
	Dog doge;
	doge.add_idea_to_brain(0, "much wow");
	
	Dog& doge_ref = doge; // assigns doges addy to doge_ref;
	Dog doge_cpy(doge_ref); // create doge_cpy with copy constructor;
	doge_cpy.add_idea_to_brain(0, "call elon"); // change doge_cpy idea without changing doges idea proofs deep copy
	
	std::cout << "Doges_cpy idea: " << doge_cpy.get_idea(0) << std::endl;
	std::cout << "Doges idea: "<< doge.get_idea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "[Proof Cat Deep Copy]\n";
	std::cout << std::endl;
	Cat kitty;
	kitty.add_idea_to_brain(0, "want milk");
	
	Cat& kitty_ref = kitty; // assigns doges addy to doge_ref;
	Cat kitty_cpy(kitty_ref); // create doge_cpy with copy constructor;
	kitty_cpy.add_idea_to_brain(0, "want fish"); // change doge_cpy idea without changing doges idea proofs deep copy
	
	std::cout << "kitty_cpy idea: " << kitty_cpy.get_idea(0) << std::endl;
	std::cout << "kitty idea: "<< kitty.get_idea(0) << std::endl;
	std::cout << std::endl;

	// std::cout << "[Example Shallow Copy]\n";
	
	// Dog doggo;
	// doggo.add_idea_to_brain(0, "want bone");

	// Dog& doggo_ref = doggo;

	// doggo_ref.add_idea_to_brain(0, "want meat");
	// std::cout << "doggo idea: " << doggo.get_idea(0) << std::endl;
	// std::cout << "doggo_ref idea: "<< doggo_ref.get_idea(0) << std::endl;
	
	// std::cout << std::endl;
	// std::cout << std::endl;
	
	std::cout << "DECONSTRUCTORS\n";
	// delete each animal(dog or cat) in the array
	int p;
	p = 0;
	while (p <= 3)
	{
		delete animal_array[p];
		p++;
	}
	
	return (0);
}
