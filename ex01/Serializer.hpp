/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <string>
#include <iostream>

class	Serializer
{

public:

static uintptr_t	serialize(Data* ptr);
static Data* 		deserialize(uintptr_t raw);

private:

	Serializer(void);
	Serializer(Serializer const &src);
	~Serializer(void);
	Serializer	&operator=(Serializer const &src);

};




#endif