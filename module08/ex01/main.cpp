/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:35:16 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/24 20:31:08 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	// Test 10k numbers
	// try
	// {
	// 	Span span1 = Span(10000);
	// 	std::vector<int> veci;
		
	// 	for (unsigned int i = 0; i < 10000; i++)
	// 	{
	// 		veci.push_back(i);
	// 	}
	// 	span1.addManyNums(veci.begin(), veci.end());

	// 	std::cout << span1.shortestSpan() << std::endl;
	// 	std::cout << span1.longestSpan() << std::endl;
	// }
	// catch (std::length_error& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// 	return (0);
	// }
	// catch (...)
	// {
	//	std::cout << "exception caught\n";
	//	return (0);
	// }
	
	//Test container is full
	// try
	// {
	// 	Span sp = Span(5);
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	sp.addNumber(22);

	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// 	return (0);
	// }
	// catch (...)
	// {
	// 	std::cout << "exception caught\n";
	// 	return (0);
	// }

	//Test from subject.pdf
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
	

	
	

	return (0);
}
