/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:41:16 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/05 20:34:09 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain 
{
	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(Brain const &obj);
		Brain& operator=(Brain const &obj);
		~Brain();
		
};

#endif