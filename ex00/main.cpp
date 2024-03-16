#include "ScalarConverter.hpp"

int main(void)
{
{
    /*  test char */
    ScalarConverter::convert("'\0'");
    ScalarConverter::convert("'a'");
    ScalarConverter::convert("a");
    ScalarConverter::convert("'s's's's'");
    ScalarConverter::convert("'s's");
    ScalarConverter::convert("'7'");
}
std::cout << std::endl << std::endl << std::endl;
{
    /*  test int */
    ScalarConverter::convert("6");
    ScalarConverter::convert("-6");
    ScalarConverter::convert("+6");
    ScalarConverter::convert("+");
    ScalarConverter::convert("-");
    ScalarConverter::convert("--");
    ScalarConverter::convert("++");
    ScalarConverter::convert("+2147483647");
    ScalarConverter::convert("+2147483648");
    ScalarConverter::convert("-2147483648");
    ScalarConverter::convert("-2147483649");
    ScalarConverter::convert("-2147483s648");
    ScalarConverter::convert("77777777777777777777777777777777777777777777777777777");
    ScalarConverter::convert("-77777777777777777777777777777777777777777777777777777");

}
std::cout << std::endl << std::endl << std::endl;
{
    /*  test float */
    ScalarConverter::convert("6.");
    ScalarConverter::convert("6.0");
    ScalarConverter::convert("-6.f");
    ScalarConverter::convert("+6.f");
    ScalarConverter::convert("+.f");
    ScalarConverter::convert("-.f");
    ScalarConverter::convert("--.f");
    ScalarConverter::convert("++.f");
    ScalarConverter::convert("+2147483647.2321");
    ScalarConverter::convert("+2147483648.34254543f");
    ScalarConverter::convert("-2147483647.f");
    ScalarConverter::convert("-2147483648.0t4f");
    ScalarConverter::convert("7777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777.f");
    ScalarConverter::convert("-7777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777.f");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("-infff");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("42.0f");
}
std::cout << std::endl << std::endl << std::endl;
{
    /*  test double */
    ScalarConverter::convert("6.");
    ScalarConverter::convert("6.0");
    ScalarConverter::convert("-6.");
    ScalarConverter::convert("+6.");
    ScalarConverter::convert("+.");
    ScalarConverter::convert("-.");
    ScalarConverter::convert("--.");
    ScalarConverter::convert("++.");
    ScalarConverter::convert("+2147483647.2321");
    ScalarConverter::convert("+2147483648.34254543");
    ScalarConverter::convert("-2147483647.");
    ScalarConverter::convert("-2147483648.0t4");
    ScalarConverter::convert("7777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777.");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("-infff");
    ScalarConverter::convert("+inf");
}
}
