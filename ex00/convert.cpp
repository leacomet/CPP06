#include "ScalarConverter.hpp"

void    convert_char(std::string literal)
{
    char    value_char = literal[1];
    int     value_int = static_cast<int>(value_char);
    float   value_float = static_cast<float>(value_char);
    double  value_double = static_cast<double>(value_char);

    std::cout << "char: " << value_char << std::endl;
    std::cout << "int: " << value_int << std::endl;
    std::cout << "float: " << value_float << ".0f" << std::endl;
    std::cout << "double: " << value_double << ".0" << std::endl;
}

void    convert_int(std::string literal)
{
    long     value_int = strtol(literal.c_str(), NULL, 10);

    if (value_int > INT32_MAX || value_int < INT32_MIN)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if (value_int < 32 || value_int > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value_int) << std::endl;
    std::cout << "int: " << value_int << std::endl;
    std::cout << "float: " << static_cast<float>(value_int) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(value_int) << ".0" << std::endl;
}

void    convert_float(std::string literal)
{
    float   value_float = strtof(literal.c_str(), NULL);

    if (literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << value_float << std::endl;
        std::cout << "double: " << value_float << std::endl;
        return;
    }
    if (value_float < 32 || value_float > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value_float) << std::endl;
    if (value_float > static_cast<float>(INT32_MAX) || value_float < INT32_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value_float) << std::endl;
    
    std::cout << "float: " << value_float << std::endl;
    std::cout << "double: " << static_cast<double>(value_float) << std::endl;
}

void    convert_double(std::string literal)
{
    double   value_double = strtod(literal.c_str(), NULL);

    if (literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << value_double << std::endl;
        std::cout << "double: " << value_double << std::endl;
        return;
    }
    if (value_double < 32 || value_double > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value_double) << std::endl;
    if (value_double > INT32_MAX || value_double < INT32_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value_double) << std::endl;
    
    std::cout << "float: " << static_cast<float>(value_double) << std::endl;
    std::cout << "double: " << value_double << std::endl;
}