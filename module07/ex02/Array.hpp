/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:54:13 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/22 19:01:20 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include "iostream"


template <typename T>
class Array
{
	private:
		unsigned int _size_arr;
		T *_arr;

	public:
		Array()
		{
			_size_arr = 0;
			_arr = NULL;
		}
		
		Array(unsigned int n)
		{
			_arr = NULL;
			_size_arr = n;
			if (n <= 0)
				std::cout << "len must be more than 0\n";
			else
				_arr = new T[n];
		}
		
		Array (const Array& obj)
		{
			std::cout << "copy constructor\n";
			this->_size_arr = obj.size();
			this->_arr = new T[obj.size()];
			for (unsigned int i = 0; i < obj.size(); i++)
			{
				this->_arr[i] = obj._arr[i];
			}
		}
		
		Array& operator=(const Array& obj)
		{
			std::cout << "assignment constructor\n";
			this->_size_arr = obj.size();
			delete []this->_arr;
			this->_arr = new T[obj.size()];
			for (unsigned int i = 0; i < obj.size(); i++)
			{
				this->_arr[i] = obj._arr[i];
			}
			return (*this);
		}
		
		T& operator[](unsigned int index)
		{
			if (index > this->size() - 1 || index < 0)
			{
				std::cout << "index out of range of array\n";
				throw std::exception();
			}
			else
			{
				return (_arr[index]);
			}
		}
		
		~Array()
		{
			delete []this->_arr;
		}

		unsigned int size() const
		{
			return (this->_size_arr);
		}
};

#endif