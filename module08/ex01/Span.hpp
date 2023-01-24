/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:17:35 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/24 19:31:37 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <exception>
#include <algorithm> // min/max_element

class Span
{
	private:
		unsigned int arr_size;
		std::vector<int> int_vec; 

	public:
		Span();
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();

		Span(unsigned int n);
		void addManyNums(std::vector<int>::iterator start, std::vector<int>::iterator end);
		void addNumber(unsigned int new_num);
		
		int shortestSpan();
		int longestSpan();
};

#endif