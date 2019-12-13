#include <cmath>
#include <iostream>

// int giaiPT(float a, float b, float c, float& x1, float& x2)
// {
//     float delta = b * b - 4 * a * c;
//     if (delta < 0)
//     {
//         return -1;
//     }
//     else if (delta == 0)
//     {
//         x1 = -b / (2 * a);
//         x2 = x1;
//         return 0;
//     }
//     else
//     {
//         delta = sqrt(delta);
//         x1 = (-b + delta) / (2 * a);
//         x2 = (-b - delta) / (2 * a);
//         return 1;
//     }
// }

int main()
{
    float a, b, c;
    do
    {
        std::cout << "Nhap a:";
        std::cin >> a;
        std::cout << "Nhap b:";
        std::cin >> b;
        std::cout << "Nhap c:";
        std::cin >> c;
    } while (a == 0);

    float delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        std::cout << "Phuon trinh vo nghiem!";
    }
    else if (delta == 0)
    {
        std::cout << "Phuong tinh co nghiem kep" << std::endl;
        float x = -b / (2 * a);
        std::cout << "x1 = x2 = " << x << std::endl;
    }
    else
    {
        std::cout << "Phuong trinh da cho co 2 nghiem: " << std::endl;
        float x1, x2;
        float sqrt_delta = sqrt(delta);
        x1 = (-b + sqrt_delta) / (2 * a);
        x2 = (-b - sqrt_delta) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }

    //     int x = giaiPT(a, b, c, x1, x2);
    // if (x == -1)
    // {
    //     std::cout << "Phuong trinh da cho vo nghiem!";
    // }
    // else if (x == 0)
    // {
    //     std::cout << "Phuong trinh da cho co nghiem kep:" << std::endl;
    //     std::cout << "x1 = x2 = " << x2;
    // }
    // else if (x == 1)
    // {
    //     std::cout << "Phuong trinh da cho co 2 nghiem:" << std::endl;
    //     std::cout << "x1 = " << x1 << std::endl;
    //     std::cout << "x2 = " << x2 << std::endl;
    // }
}
