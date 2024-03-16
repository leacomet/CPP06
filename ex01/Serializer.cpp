#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    void        *temp = ptr;
    uintptr_t   machin = reinterpret_cast<uintptr_t>(temp);

    return (machin);
}

Data* 		Serializer::deserialize(uintptr_t raw)
{
    void    *temp = reinterpret_cast<void*>(raw);
    Data    *machin = reinterpret_cast<Data *>(temp);

    return (machin);
}