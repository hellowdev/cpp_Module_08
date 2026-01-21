#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> myVector;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& original);
        Span& operator=(const Span& original);
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
        template<typename Container>
        void fillRange(Container &contain)
        {
            unsigned int emptySpace = myVector.capacity() - myVector.size();
            if (emptySpace < contain.size())
                throw std::out_of_range("range bigger");
            std::vector<int>::iterator pos = myVector.begin() + myVector.size();
            myVector.insert(pos, contain.begin(), contain.end());
        }
        // void printvalue();
        ~Span();
};


