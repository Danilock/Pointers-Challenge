#include <iostream>

int main(int argc, char* argv[])
{
    int a, b;
    int* ptrA;
    int* ptrB;

    std::cout << "Insert value for A: ";
    std::cin >> a;

    std::cout << "Insert value for B: ";
    std::cin >> b;

    ptrA = &a;
    ptrB = &b;

    std::cout << std::endl << "A value is: " << *ptrA << std::endl;
    std::cout << std::endl << "B value is: " << *ptrB << std::endl;
    
    return 0;
}

