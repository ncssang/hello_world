#include <cmath>
#include <iostream>
#include <string>

float get_euclid_distance(float xa, float ya, float xb, float yb)
{
    float dx = xa - xb;
    float dy = ya - yb;
    float distance = sqrt(dx * dx + dy * dy);
    return distance;
}

int main()
{
    float xa, ya, xb, yb, d_AB;

    std::cout << "Nhap toa do xa: ";
    std::cin >> xa;
    std::cout << "Nhap toa do ya: ";
    std::cin >> ya;
    std::cout << "Nhap toa do xb: ";
    std::cin >> xb;
    std::cout << "Nhap toa do yb: ";
    std::cin >> yb;
    d_AB = get_euclid_distance(xa, ya, xb, yb);

    std::cout << "Khoang cach hai diem d_AB = " << d_AB << std::endl;
}
