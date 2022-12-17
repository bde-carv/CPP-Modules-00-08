/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:06:10 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/17 19:12:17 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <iomanip>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning();
		void error(void);

	public:
		void complain(std::string level);
		Harl();
		~Harl();
		
};

#endif