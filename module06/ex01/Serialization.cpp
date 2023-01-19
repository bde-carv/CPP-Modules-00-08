/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:49:12 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/18 19:54:00 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

/*
* reinterpret_cast: changes type but keeps the
* bits the same.
* it produces a new value of the specified type with 
* the same bit pattern;
* used to display incompatible datatypes in different forms
* (e.g show mango as banana);
* const_cast<type>(param): add or remove const;
*/
uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}