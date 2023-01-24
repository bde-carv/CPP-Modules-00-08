/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:37:15 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/24 20:33:15 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// canonical
Span::Span()
{
	std::cout << "void constructor\n";
}

Span::Span(const Span& obj)
{
	this->arr_size = obj.arr_size;
	this->int_vec = obj.int_vec;
}

Span& Span::operator=(const Span& obj)
{
	this->arr_size = obj.arr_size;
	this->int_vec = obj.int_vec;
	
	return (*this);
}

Span::~Span()
{
	//std::cout << "Destructor \n";
}

Span::Span(unsigned int n) : arr_size(n)
{
	//std::cout << "int constructor\n";
}

// canonical end

// methods
void Span::addNumber(unsigned int new_num)
{
	if (this->int_vec.size() == this->arr_size)
	{
		throw std::length_error("Container is full");
	}
	else
	{
		this->int_vec.push_back(new_num);
	}
}

/*
* std::min_element : returns iterator pointing to min/max element
*/
int Span::longestSpan()
{
	if (this->arr_size == 0 || this->arr_size == 1)
	{
		throw std::length_error("Not enough numbers\n");
	}

	std::vector<int>::iterator min_iter;
	std::vector<int>::iterator max_iter;
	min_iter = std::min_element(this->int_vec.begin(), this->int_vec.end());
	max_iter = std::max_element(this->int_vec.begin(), this->int_vec.end());
	
	int distance = *max_iter - *min_iter;

	return (distance);
}

/*
* std::sort: without param it sorts in ascending order;
*/
int Span::shortestSpan()
{
	
	if (this->arr_size == 0 || this->arr_size == 1)
	{
		throw std::length_error("Not enough numbers\n");
	}

	std::vector<int> vec_cpy;
	vec_cpy = this->int_vec;

	std::sort(vec_cpy.begin(), vec_cpy.end());
	
	int short_distance  = INT_MAX;
	
	for (unsigned int i = 0; i < this->arr_size - 1; i++)
	{
		if (vec_cpy[i + 1] - vec_cpy[i] < short_distance)
			short_distance = vec_cpy[i + 1] - vec_cpy[i];
	}
	
	return (short_distance);
}

/*
* std::distance(first, last) : returns the nr. of elements between two iterators
* the element last is not included in the counting!;
* 
* std::vector::insert(pos, it_start, it_end): inserts all elements in the range
* start-end !before! pos;
*/
void Span::addManyNums(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) > this->arr_size)
	{
		throw std::length_error("Too much to insert\n");
	}
	else
	{
		this->int_vec.insert(this->int_vec.end(), start, end);
	}
}
