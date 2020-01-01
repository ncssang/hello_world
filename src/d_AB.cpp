#include "hello_world/geometry.hpp"

int main()
{
    Point a, b;

    std::cout << "Nhap toa do xa: ";
    std::cin >> a.x;
    std::cout << "Nhap toa do ya: ";
    std::cin >> a.y;
    std::cout << "Nhap toa do xb: ";
    std::cin >> b.x;
    std::cout << "Nhap toa do yb: ";
    std::cin >> b.y;
    float d_AB = get_euclid_distance(a, b);

    std::cout << "Khoang cach hai diem d_AB = " << d_AB << std::endl;
}
