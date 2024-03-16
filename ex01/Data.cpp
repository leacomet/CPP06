#include "Data.hpp"

Data::Data(void) : _nbr(1), _str("a")
{
    return;
}

Data::Data(int nbr, std::string str) : _nbr(nbr), _str(str)
{
    return;
}

Data::Data(Data const &src)
{
    this->_nbr = src.get_nbr();
    this->_str = src.get_str();
    return;
}

Data::~Data(void)
{
    return;
}

Data    &Data::operator=(Data const &src)
{
    this->_nbr = src.get_nbr();
    this->_str = src.get_str();
    return (*this);
}

int Data::get_nbr(void) const
{
    return (this->_nbr);
}

std::string Data::get_str(void) const
{
    return (this->_str);
}