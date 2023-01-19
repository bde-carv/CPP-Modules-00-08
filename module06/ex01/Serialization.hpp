/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:34:46 by bde-carv          #+#    #+#             */
/*   Updated: 2023/01/18 21:24:41 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERI_HPP
# define SERI_HPP

#include <iostream>

typedef struct s_struct
{
	char a;
	int b;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);



#endif