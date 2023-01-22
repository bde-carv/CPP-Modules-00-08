/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:44:52 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/22 16:47:23 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int num_array[5] = {1,2,3,4,5};
	char char_array[3] = {'A','B','C'};
	std::string str_array[3] = {"this", "is", "text"};
	

	std::cout << "[Test int_Array]:\n";
	//iter(num_array, 5, &add_one);
	iter(num_array, 5, &print);
	std::cout << std::endl;
	std::cout << "[char_Array]:\n";
	//iter(char_array, 3, &add_one);
	iter(char_array, 3, &print);
	std::cout << std::endl;
	std::cout << "[string_Array]:\n";
	//iter(char_array, 3, &add_one);
	iter(str_array, 3, &print);
	std::cout << std::endl;
	
	return(0);
}
