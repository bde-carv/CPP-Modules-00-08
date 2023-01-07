/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:41:16 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/07 18:10:15 by bde-carv         ###   ########.fr       */
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
		Brain(std::string idea);
		Brain& operator=(Brain const &obj);
		virtual ~Brain();

		void add_idea(int i, std::string idea);
		std::string get_idea(int i) const;
		
};

#endif