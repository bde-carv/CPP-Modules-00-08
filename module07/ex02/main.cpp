/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:53:50 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/22 19:15:47 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
	std::cout << "[Empty array]\n";
	Array<int> empty_arr;
	std::cout << "empty_arr size: " << empty_arr.size() << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	
	std::cout << "[Int array size 5]\n";
	Array<int> int_arr(5);
	std::cout << "int_arr size: " << int_arr.size() << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[..filling int_arr with numbers..]\n";
	for (int i = 0; i < 5; i++)
	{
		int_arr[i] = i;
		std::cout << i << " put into int_arr at index " << i << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[check content of int_arr]\n";
	for (int y = 0; y < 5; y++)
	{
		std::cout << "int_arr at index: " << y << " is : " << int_arr[y] << std::endl; // why is it possible to acces int_arr[y] without specifying the member attribute?
	}
	std::cout << "------------------------------\n";
	std::cout << std::endl;
	std::cout << "[proof deep-copy copy constructor]\n";
	Array<int> int_arr_cpy = int_arr;
	int_arr_cpy[2] = 17;
	std::cout << "int_arr[2] is: " << int_arr[2] << std::endl;
	std::cout << "int_arr_cpy[2] is: " << int_arr_cpy[2] << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[proof deep-copy assignment constructor]\n";
	Array<int> int_arr_ass_cpy;
	int_arr_ass_cpy = int_arr;
	int_arr_ass_cpy[2] = 22;
	std::cout << "int_arr[2] is: " << int_arr[2] << std::endl;
	std::cout << "int_arr_ass_cpy[2] is: " << int_arr_ass_cpy[2] << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[Assign number to int_arr out of range]\n";
	try
	{
		int_arr[6] = 12;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[Printing number of int_arr out of range]\n";
	try
	{
		std::cout << int_arr[75] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[Fill up emtpy_arr]\n";
	empty_arr = int_arr_cpy;
	for (int k = 0; k < 5; k++)
	{
		std::cout << "empty_arr[" << k << "]: " << empty_arr[k] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------------\n";
	std::cout << "[Array of strings]\n";
	Array<std::string> str_arr(5);
	str_arr[0] = "Hello\n";
	str_arr[1] = "this\n";
	str_arr[2] = "will\n";
	str_arr[3] = "look\n";
	str_arr[4] = "nice\n";
	for (int j = 0; j < 5; j++)
	{
		std::cout << "str_arr[" << j << "]: " << str_arr[j] << std::endl;
	}
	std::cout << "------------------------------\n";
	return (0);
}