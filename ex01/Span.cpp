#include "Span.hpp"
#include <iostream>

Span::Span() : myVector(0)
{}
Span::Span(unsigned int N) : myVector(N)
{
    myVector.clear();
}

Span::Span(const Span& original)
{
    myVector = original.myVector;
}

Span& Span::operator=(const Span& original)
{
    myVector = original.myVector;
    return *this;
}

void Span::addNumber(int nb)
{
    if (myVector.size() == myVector.capacity())
        throw std::out_of_range("your array is full");
    myVector.push_back(nb);
}

int Span::longestSpan()
{
    if (myVector.size() == 0 || myVector.size() == 1)
        throw std::out_of_range("longest not found");
    std::vector<int>::iterator max = std::max_element(myVector.begin(), myVector.end());
    std::vector<int>::iterator min = std::min_element(myVector.begin(), myVector.end());

    return *max - *min;
}

int Span::shortestSpan()
{
    int lowest = INT_MAX;
    unsigned int i = 0;
    unsigned int j = 1;
    if (myVector.size() == 0 || myVector.size() == 1)
        throw std::out_of_range("shortest not found");
    while (i < myVector.size())
    {
        j = i + 1;
        while (j < myVector.size())
        {
            if (lowest > abs(myVector[i] - myVector[j]))
                lowest = abs(myVector[i] - myVector[j]);
            j++;
        }
        i++;
    }
    return lowest;
}

// void Span::printvalue()
// {
//     unsigned int i = 0;
    
//     while (i < myVector.capacity())
//     {
//         std::cout << myVector[i] << '\n';
//         i++;
//     }
// }

Span::~Span(){}