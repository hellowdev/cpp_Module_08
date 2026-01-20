#include "MutantStack.hpp"
#include <vector>


int main()
{
    MutantStack<int> ms;
    ms.begin();
    

    MutantStack<int>::iterator myiter;
    
    
    ms.push(15);
    ms.push(20);
    
    ms.begin();
    std::cout << ms.top() << '\n';

    ms.pop();
    
    std::cout << ms.size() << '\n';
    std::cout << ms.empty() << '\n';
    MutantStack<int>::iterator it = ms.begin();
    // MutantStack<int>::iterator ite = ms.end();
    it++;
    return 0;
}