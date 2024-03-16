/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATA_HPP
#define DATA_HPP

#include <string>
#include <stdint.h>

class	Data
{

public:

	Data(void);
    Data(int nbr, std::string str);
	Data(Data const &src);
	~Data(void);
	Data	&operator=(Data const &src);

    int         get_nbr(void) const;
    std::string get_str(void) const;

private:

    int         _nbr;
    std::string _str;

};




#endif