/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:36:35 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/23 20:38:17 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
# define EASY_HPP

#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <iterator>

#include <exception>
#include <iterator>
/*
* we know T will be a container so we can use
* the container functions;
* iterator quasi das gleiche wie ein Index;
*******************************************
* each container type needs its own iterator;
* std::find(first, last, value) : searches and 
* returns the iterator(=index) of the value within
* the range first-last, if nothing found last is returned;
* to acces the value at the iterator we need to dereference
* the iterator;
* it - container.begin() gives (iterator/index) position of the element;
*/
template<typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it; // iterator for that data type (e.g an array);
	it = std::find(container.begin(), container.end(), num);

	if (it == container.end()) // end() returns the iterator of the element AFTER the last element;
	{
		std::cout << "Nothing found" << std::endl;
		throw std::exception(); 
	}
	else
	{
		std::cout << "found: " << *it << " at: " << it - container.begin() << std::endl;
	}
	
	return (it);
};

#endif