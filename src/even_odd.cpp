#include <iostream>
#include <string>

int main()
{
    int a;
    std::cout << "Nhap a: ";
    std::cin >> a;
    if (a % 2 == 0)
    {
        std::cout << "So chan" << std::endl;
    }
    else
    {
        std::cout << "So le" << std::endl;
    }
}