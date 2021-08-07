#include <foo/foo.hpp>
#include <bar.hpp>
#include <iostream>

int main()
{
    std::cout << "Example" << std::endl;
    std::cout << bar(10) << std::endl;
    std::cout << foo(10) << std::endl;

    return 0;
}


