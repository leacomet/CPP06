#include "Base.hpp"


Base    *generate(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    int random = rand();

    if (random % 3 == 0)
    {
        Base    *child = new A;
        
        std::cout << "ptr of type \'A\' genereated" << std::endl;
        return (child);
    }
    else if (random % 3 == 1)
    {
        Base    *child = new B;
        
        std::cout << "ptr of type \'B\' genereated" << std::endl;
        return (child);
    }
    else
    {
        Base    *child = new C;
        
        std::cout << "ptr of type \'C\' genereated" << std::endl;
        return (child);
    }
}

void    identify(Base *p)
{
    A   *ptr1 = dynamic_cast<A *>(p);
    if (ptr1)
    {
        std::cout << "ptr of type : \"A\"" << std::endl;
        return;
    }
    B   *ptr2 = dynamic_cast<B *>(p);
    if (ptr2)
    {
        std::cout << "ptr of type : \"B\"" << std::endl;
        return;
    }
    C   *ptr3 = dynamic_cast<C *>(p);
    if (ptr3)
    {
        std::cout << "ptr of type : \"C\"" << std::endl;
        return;
    }
    std::cout << "Error occured while generating ptr" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "ref of type : \"A\"" << std::endl;
        return;
    }
    catch (std::exception &bc)
    {}
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "ref of type : \"B\"" << std::endl;
        return;
    }
    catch (std::exception &bc)
    {}
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "ref of type : \"C\"" << std::endl;
        return;
    }
    catch (std::exception &bc)
    {}
    std::cout << "Error occured while generating ref" << std::endl;
}

int main(void)
{
{
    Base    *ptr;
    
    ptr = generate();
    identify(ptr);
    delete ptr;
}
std::cout << std::endl;
{
    A       type_A;
    B       type_B;
    C       type_C;
    Base    &ref_A = type_A;
    Base    &ref_B = type_B;
    Base    &ref_C = type_C;
    
    identify(ref_A);
    identify(ref_B);
    identify(ref_C);
}
}