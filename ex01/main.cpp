#include "Serializer.hpp"

int main(void)
{
{
    Data        non_empty(7777777, "seven seven");
    Data        *ptr = &non_empty;
    uintptr_t   temp;
    Data        *other;

    temp = Serializer::serialize(ptr);
    other = Serializer::deserialize(temp);
    std::cout << "nbr = " << other->get_nbr() << std::endl;
    std::cout << "str = " << other->get_str() << std::endl;
}
}