#include "easyfind.hpp"


int main()
{
    std::array<int, 15> myarray;
    
    for (size_t i = 0; i < 15; i++)
    {
        myarray[i] = 100;
    }
    myarray[10] = 3;
    try
    {
       std::cout << ::easyfind(myarray, 3) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << ::easyfind(myarray, 4) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}