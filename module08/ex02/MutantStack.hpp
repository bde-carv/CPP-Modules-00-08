/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:54:07 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/25 19:57:31 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
# define MUTANT_HPP

#include <iostream>
#include <stack>
#include <iterator>

/*
* typedef is to declare a type, typename is used to get the type which templates
*/
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{};
		MutantStack(const MutantStack& obj)
		{
			*this = obj;	
		};
		MutantStack<T> operator=(const MutantStack<T>& obj)
		{
			this->c = obj.c;
		};
		virtual ~MutantStack()
		{};

		/* typename tells compiler its a type (=(r)iterator), this is needed
		 * because we are in a template where we need to tell the compiler
 		 * that this (here ...container_type::iterator) is a type;
		 * the line means: declare a class of type (r)iterator with the name (r)iterator*
		 * 
		 * c: is the underlying container in the stack (vectore,list or deque), thus we can
		 * access the respective begin()/end() functions from there and return it to our own
		 * created iterator;
		 */
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}
};

#endif