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
    float x_a, y_a, x_b, y_b, d_AB;

    std::cout << "Nhap toa do xa: ";
    std::cin >> x_a;
    std::cout << "Nhap toa do ya: ";
    std::cin >> y_a;
    std::cout << "Nhap toa do xb: ";
    std::cin >> x_b;
    std::cout << "Nhap toa do yb: ";
    std::cin >> y_b;
    d_AB = get_euclid_distance(x_a, y_a, x_b, y_b);

    std::cout << "Khoang cach hai diem d_AB = " << d_AB << std::endl;
}
