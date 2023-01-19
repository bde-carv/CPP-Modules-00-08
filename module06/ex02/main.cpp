/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:55:01 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/19 19:36:35 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
* time(NULL) is the seed for the srand function
* it ensures that different numbers are generated
*/
Base * generate(void)
{
	srand(time(NULL));
	int num = rand();
	
	if (num % 3 == 0)
	{
		return (new A());
	}
	else if ( num % 3 == 1)
	{
		return (new B()); 
	}
	else
	{
		return (new C());
	}
}

/*
* dynamic casts: is for casting between class types
* you can casts up (derived to base) or down (base to derived).
* casting between non-related classes is not possible
* for dynamic_casting with pointers:returns a null pointer if cast failed
* for dynmaic_casting with refs: throws exception if cast fails
*/
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "This is an A class\n";
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "This is a B class\n";
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "This is a C class\n";
	}
	else
	{
		std::cout << "The input is not related to class A, B nor C\n";
	}
}

void identify(Base& p)
{
	Base ref;
	try
	{
		ref = dynamic_cast<A&>(p);
		std::cout << "This is an A class\n";
	}
	catch (std::exception &e)
	{
		try
		{
			ref = dynamic_cast<B&>(p);
			std::cout << "This is a B class\n";
		}
		catch (std::exception& e)
		{
			try
			{
				ref = dynamic_cast<C&>(p);
				std::cout << "This is a C class\n";
			}
			catch (std::exception& e)
			{
				std::cout << "Dynamic cast not possible because: " << e.what() << std::endl;
			}
		}
	}
}

int main()
{
	std::cout << "[Random pointer]\n";
	Base *mystery_box = generate();
	identify(mystery_box);
	delete mystery_box;
	std::cout << std::endl;
	std::cout << "-----------------" << std::endl;
	
	std::cout << "[Random reference]\n";
	Base *pandoras_box = generate();
	Base& ref_pandoras_box = *pandoras_box;
	identify(ref_pandoras_box);
	delete pandoras_box;
	std::cout << std::endl;
	
	std::cout << "-----------------" << std::endl;
	std::cout << "[It's A*]\n";
	Base* its_A = new A();
	identify(its_A);
	std::cout << "[Ref A]\n";
	Base& ref_its_A = *its_A;
	identify(ref_its_A);
	delete its_A;
	std::cout << std::endl;
	
	std::cout << "-----------------" << std::endl;
	std::cout << "[It's B*]\n";
	B* its_B = new B();
	identify(its_B);
	std::cout << "[Ref B]\n";
	Base& ref_its_B = *its_B;
	identify(ref_its_B);
	delete its_B;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "[It's C*]\n";
	C* its_C = new C();
	identify(its_C);
	std::cout << "[Ref C]\n";
	Base& ref_its_C = *its_C;
	identify(ref_its_C);
	delete its_C;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "-----------------" << std::endl;
	std::cout << "[It's Base* (not related)]\n";
	Base* its_Base = new Base();
	identify(its_Base);
	std::cout << "[Ref Base (not related)]\n";
	Base& ref_its_Base = *its_Base;
	identify(ref_its_Base);
	delete its_Base;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------" << std::endl;

	return (0);
}