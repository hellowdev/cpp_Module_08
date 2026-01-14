#include <iostream>

template <typename T>
int easyfind(T type, int x)
{
    typename T::iterator itIndex = std::find(type.begin(), type.end(), x);
    if (itIndex == type.end())
        throw std::out_of_range("nothing found");
        
    return std::distance(type.begin(), itIndex);
}