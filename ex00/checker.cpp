#include "ScalarConverter.hpp"

bool    is_literal_char(std::string literal)
{
    char    c; 

    if (literal.length() != 3)
        return (0);
    c = literal[1];
    if (literal[0] != '\'' || literal[2] != '\'')
        return(0);
    if (!isprint(c))
    {
        std::cout << "Conversion to char not displayable !" << std::endl;
        return (0);
    }
    return (1);
}

bool    is_literal_int(std::string literal)
{
    int i = 0;

    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (!literal[i])
        return(0);
    while (isdigit(literal[i]))
        i++;
    if (literal[i])
        return (0);
    return (1);
}

bool    is_literal_float(std::string literal)
{
    int i = 0;

    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        return (1);
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (!isdigit(literal[i]))
        return(0);
    while (isdigit(literal[i]))
        i++;
    if (literal[i] == '.')
    {
        i++;
        while (isdigit(literal[i]))
            i++;
    }
    if (literal[i] != 'f' || literal[i + 1])
        return (0);
    return (1);
}

bool    is_literal_double(std::string literal)
{
    int i = 0;

    if (literal == "-inf" || literal == "+inf" || literal == "nan")
        return (1);
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (!isdigit(literal[i]))
        return(0);
    while (isdigit(literal[i]))
        i++;
    if (literal[i] == '.')
    {
        i++;
        while (isdigit(literal[i]))
            i++;
    }
    if (literal[i])
        return (0);
    return (1);
}