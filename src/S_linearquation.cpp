#include <cmath>
#include <iostream>

int main()
{
    float a_1, b_1, c_1, a_2, b_2, c_2, D, D_x, D_y;
    std::cout << "Nhap a_1:";
    std::cin >> a_1;
    std::cout << "Nhap b_1:";
    std::cin >> b_1;
    std::cout << "Nhap c_1:";
    std::cin >> c_1;
    std::cout << "Nhap a_2:";
    std::cin >> a_2;
    std::cout << "Nhap b_2:";
    std::cin >> b_2;
    std::cout << "Nhap c_2:";
    std::cin >> c_2;

    D = a_1 * b_2 - a_2 * b_1;
    D_x = c_1 * b_2 - c_2 * b_1;
    D_y = a_1 * c_2 - a_2 * c_1;

    if (D == 0)
    {
        if (D_x != 0 || D_y != 0)
        {
            std::cout << "Phuong trinh da cho vo nghiem!" << std::endl;
        }
        else
        {
            std::cout << "Phuong trinh da cho co vo so nghiem!" << std::endl;
        }
    }
    else
    {
        std::cout << "Phuong trinh dacho co 2 nghiem!" << std::endl;
        std::cout << "x = " << D_x / D << std::endl;
        std::cout << "y = " << D_y / D << std::endl;
    }
}
