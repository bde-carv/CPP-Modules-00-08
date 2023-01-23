/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:36:15 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/23 20:52:28 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


/*
* push_back: puts the element at the end;
*
*/
int main()
{
	std::vector<int> int_vect;
	std::list<int> int_list;
	std::deque<int> int_deq; // double linked list
	std::array<int> int_arr;

	int_vect.push_back(4);
	int_vect.push_back(8);
	int_vect.push_back(6);

	int_list.push_back(9);
	int_list.push_back(15);
	int_list.push_back(67);

	int_deq.push_back(56);
	int_deq.push_back(90);
	int_deq.push_back(12);

	int_arr.p

	std::cout << "[Not found]:\n";
	try
	{
		easyfind(int_vect, 34);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << "------------------------\n";
	std::cout << "[Vector]\n";
	try
	{
		easyfind(int_vect, 4);
		easyfind(int_vect, 8);
		easyfind(int_vect, 6);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------\n";
	std::cout << "[List]\n";
	try
	{

	}
	catch
	{
		
	}
	std::cout << "------------------------\n";
	std::cout << "[Deque]\n";
	try
	{

	}
	catch
	{
		
	}
	std::cout << "[Arr]\n";


	return (0);
}