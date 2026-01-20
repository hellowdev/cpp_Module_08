#pragma once
#include <stack>
#include <iostream>
#include <deque>

template <typename TYPE>
class MutantStack : public std::stack<TYPE>
{
    private:
        std::stack<TYPE> container;
        // MutantStack::iterator it;
        // typename std::deque<TYPE>::iterator it;
        // TYPE *beg;
        // TYPE *en;
    public:
        MutantStack(){};
        // MutantStack(const MutantStack& original)
        // {
        //     container = original.container;
        // };
        // MutantStack& operator=(const MutantStack& original)
        // {
        //     container = original.container;
        //     return (*this);
        MutantStack::iterator<TYPE> begin()
        {
            container.front();
            // return it.begin();

        }
        class iterator : public std::deque<TYPE>, public std::deque<TYPE>::iterator
        {
            private:
                TYPE *ptr;
            public:
                iterator(){};
                ~iterator(){};
                
            
        };
        ~MutantStack(){};

};