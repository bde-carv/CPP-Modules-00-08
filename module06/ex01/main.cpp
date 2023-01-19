/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:55:15 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/18 21:40:28 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	uintptr_t uptr;
	Data mystruct;
	mystruct.a = 'a';
	mystruct.b = 42;

	std::cout << "before serialization a is: " << mystruct.a << std::endl;
	std::cout << "before serialization b is: " << mystruct.b << std::endl;

	uptr = serialize(&mystruct);
	std::cout << "after serialization 'mystruct' as uintptr_t is: " << uptr << std::endl;
	std::cout << std::endl;
	Data *newstruct;
	newstruct = deserialize(uptr);
	std::cout << "[after desiralization of uptr to 'Data*']\n";
	std::cout << "a is now back to: " << newstruct->a << " and b is now back to: " << newstruct->b << std::endl;

	return (0);
}
