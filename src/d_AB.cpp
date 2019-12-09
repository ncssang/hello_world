#include <cmath>
#include <iostream>
#include <string>

int main()
{
    float xa, xb, ya, yb, dx, dy, d_ab;
    std::cout << "Nhap xa: ";
    std::cin >> xa;
    std::cout << "Nhap xb: ";
    std::cin >> xb;
    std::cout << "Nhap ya: ";
    std::cin >> ya;
    std::cout << "Nhap yb: ";
    std::cin >> yb;

    dx = xa - xb;
    dy = ya - yb;
    d_ab = sqrt(dx * dx + dy * dy);
    std::cout << "Khoang cach d_ab = " << d_ab << std::endl;
}