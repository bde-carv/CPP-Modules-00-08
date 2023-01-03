/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:13:18 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/03 21:28:44 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	std::cout << "[Wrong Animal / Wrong Cat Tests]\n";
	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	//const Animal* a = new Dog();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << std::endl;
	
	//std::cout << a->getType() << " " << std::endl;
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); //will output the wrongcat sound!
	//a->makeSound();
	wrong_meta->makeSound();

	std::cout << std::endl;
	std::cout << "[Destructors]\n";
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	delete wrong_meta;
	//delete a;
	delete wrong_i;
	
	return(0);
}


