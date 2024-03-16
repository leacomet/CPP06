/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <stdint.h>
#include <cmath>

bool    is_literal_char(std::string literal);
bool    is_literal_int(std::string literal);
bool    is_literal_float(std::string literal);
bool    is_literal_double(std::string literal);
void    convert_char(std::string literal);
void    convert_int(std::string literal);
void    convert_float(std::string literal);
void    convert_double(std::string literal);


class	ScalarConverter
{

public:

    static void    convert(std::string literal);

private:

	ScalarConverter(void);
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter(void);
	ScalarConverter	&operator=(ScalarConverter const &src);

};




#endif