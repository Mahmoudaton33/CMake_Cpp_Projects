#include <iostream>
#include "include/sum.hpp"
#include "include/mult.hpp"




int main()
{
    std::cout << "Hello from CMake!"<<std::endl;


    std::cout << "Hello from Ubuntu!"<<std::endl;

    std::cout << "this modification made by Kali user!"<<std::endl;

  
    std::cout << "New Branch !!"<<std::endl;

    std::cout << Sum(5,6) << std::endl;
    std::cout << Multiply(5,6) << std::endl;

    return 0;
}
