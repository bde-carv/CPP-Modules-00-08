/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:45:01 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/22 16:46:29 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* array, int len, void (*func)(const T&))
{
	for (int i = 0; i < len; i++)
	{
		(*func)(array[i]); 
	}
}

template<typename T>
void print(const T& value)
{
	std::cout << value << std::endl;
}

template<typename T>
void add_one(const T& value)
{
	T new_value = value + 1;
	print(new_value);
}

#endif
