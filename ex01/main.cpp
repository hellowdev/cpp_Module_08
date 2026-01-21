#include "Span.hpp"
#include <array>

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(10);
        sp.addNumber(15);
        std::array<int, 2> arr = {42, 25};
        sp.fillRange(arr);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::vector<int>test(10500);
    for (size_t i = 0; i < 10500; i++)
    {
        test[i] = 15;
    }
    Span sp(10500);
    try
    {
        // NOW OUR VECTOR IS FULL
        sp.fillRange(test);
        // HERE SHOULD THROUW
        sp.addNumber(145);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
    return 0;
    

}