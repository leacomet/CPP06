#include "ScalarConverter.hpp"

void    ScalarConverter::convert(std::string literal)
{
    if (is_literal_char(literal))
        convert_char(literal);
    else if(is_literal_int(literal))
        convert_int(literal);
    else if(is_literal_float(literal))
        convert_float(literal);
    else if(is_literal_double(literal))
        convert_double(literal);
    else
        std::cout << "the literal \"" << literal << "\" isn't a char neither an int, a float or a double" << std::endl;
}