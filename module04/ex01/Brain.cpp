/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:15:40 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/05 20:40:00 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor\n";
}

Brain::Brain(Brain const &obj)
{
	*this = obj;
	std::cout << "Brain copy constructor\n";
}

Brain& Brain::operator=(Brain const &obj)
{
	int i;
	i = 0;
	
	while (i < 100)
	{
		this->_ideas[i] = obj._ideas[i];
		i++;
	}
	std::cout << "Brain assignment constructor\n";
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}