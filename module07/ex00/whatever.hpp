/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:33:34 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/20 16:42:11 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHAT_HPP
# define WHAT_HPP

#include <iostream>

template<typename T>
void swap(T &value_1, T &value_2)
{
	T temp;

	temp = value_2;
	value_2 = value_1;
	value_1 = temp;
}

template<typename T>
T& min(T& value_1, T& value_2)
{
	if (value_1 < value_2)
		return value_1;
	else if ( value_2 < value_1)
		return value_2;
	else
		return value_2;
}

template<typename T>
T& max(T& value_1, T& value_2)
{
	if (value_1 > value_2)
		return value_1;
	else if ( value_2 > value_1)
		return value_2;
	else
		return value_2;
}



#endif