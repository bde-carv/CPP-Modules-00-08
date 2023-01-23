/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:44:52 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:26 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int num_array[5] = {1,2,3,4,5};
	char char_array[3] = {'A','B','C'};
	std::string str_array[3] = {"this", "is", "text"};
	

	std::cout << "[Test int_Array]:\n";
	//iter(num_array, 5, &add_one);
	iter(num_array, 5, &print);
	std::cout << std::endl;
	std::cout << "[char_Array]:\n";
	//iter(char_array, 3, &add_one);
	iter(char_array, 3, &print);
	std::cout << std::endl;
	std::cout << "[string_Array]:\n";
	//iter(char_array, 3, &add_one);
	iter(str_array, 3, &print);
	std::cout << std::endl;
	
	return(0);
}


// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }