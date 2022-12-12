/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:22:59 by bde-carv          #+#    #+#             */
/*   Updated: 2022/12/09 18:52:16 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char  *to_upper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	else
	{
		int str;
		str = 1;
		while (av[str])
		{
			av[str] = to_upper(av[str]);
			std::cout << av[str] << " ";
			str++;
		}
		std::cout << std::endl;
	}
	return (0);
}
