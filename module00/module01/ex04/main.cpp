/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:25:09 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/18 19:48:25 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

/*
* string.append(str to append, from start pos, till end pos);
* // find str1 starting from pos
* // if str1 is not starting at pos 0
* // appends line to rtr from 0 to pos (part until the to replacing str)
* // then append what is to be replaced
* // skip replaced string
* // delete every thing until pos in line
* // if no other str1 are in line whe add the rest of line (everything after the replaced word) to rtr
*/
void ft_replace(std::string line, std::string &rtr, std::string str1, std::string str2)
{
	size_t pos = 0;

	pos = line.find(str1, pos); 
	if (pos != 0) 
		rtr.append(line, 0, pos);
	rtr.append(str2); 
	pos += str1.length(); 
	line.erase(0, pos); 
	if (line.find(str1) == std::string::npos)
	{
		rtr.append(line);
		return ;
	}
	else
	{
		ft_replace(line, rtr, str1, str2);
	}
	
}

/*
* fail() : checks for input failure;
* eof() : detects end-of-file;
* getline(input, str, delim): reads a line into str 
* from input until eof or delim(is \n by default);
* string::find(str, pos): searches str in the string
* starting from pos; returns first char of str or string::pos
* which equals to -1;
* clear(): erases contents of a string;
*/
int main(int ac, char **av)
{	
	if (ac != 4)
	{
		std::cout << "invalid nr of arguments [4]" << std::endl;
		return (0);
	}

	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];
	size_t start = 0;
	std::ifstream finput (av[1]);
	std::ofstream fout (filename + ".replace");
	std::string line;
	std::string rtr;

	if (finput.fail())
	{
		std::cerr << "Eroor: " << filename << " can't be found\n";
		return (1);
	}

	while (!finput.eof())
	{
		std::getline(finput, line);
		if (line.find(str1, start) == std::string::npos)
			fout << line;
		else
		{
			ft_replace(line, rtr, str1, str2);
			fout << rtr;
			rtr.clear();
		}
		if (!finput.eof())
			fout << std::endl;
	}

	finput.close();
	fout.close();
	return (0);	
}
