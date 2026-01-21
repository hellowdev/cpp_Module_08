#pragma once
#include <stack>
#include <iostream>
#include <deque>

template <typename TYPE>
class MutantStack : public std::stack<TYPE>
{
    public:
        typedef typename std::stack<TYPE>::container_type::iterator iterator;
        MutantStack(){};
        MutantStack(const MutantStack& original) : std::stack<TYPE>(original)
        {};
        MutantStack& operator=(const MutantStack& original)
        {
            // this->c = original.c;
            std::stack<TYPE>::operator=(original);
            return (*this);
        }
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        ~MutantStack(){};
};