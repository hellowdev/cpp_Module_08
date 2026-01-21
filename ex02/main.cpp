#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(20);
    std::cout << "top one: " << mstack.top() << '\n';
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "-------iteration-------\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "-------COPY CONSTR-------\n";
    std::stack<int> s(mstack);
    std::deque<int> deck;
    std::deque<int>::iterator beg = mstack.begin();
    std::deque<int>::iterator en = mstack.end();
    
    std::cout << "is empty ? "<< s.empty() << '\n';
    std::cout <<  "size : " << s.size() << '\n';
    std::cout << "--------second iteration------\n";
    std::cout <<  "size before pop: " << s.size() << '\n';
    while (beg != en)
    {
        std::cout << *beg << '\n';
        s.pop();
        beg++;
    }
    std::cout <<  "size after pop: " << s.size() << '\n';
    return 0;
}