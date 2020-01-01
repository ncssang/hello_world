// a, b, c, p, s
#include <cmath>
#include <iostream>
#include <string>

#include "hello_world/geometry.hpp"

int main()
{
    Point A, B, C;
    std::cout << "Nhap toa do xA: ";
    std::cin >> A.x;
    std::cout << "Nhap toa do yA: ";
    std::cin >> A.y;
    std::cout << "Nhap toa do xB: ";
    std::cin >> B.x;
    std::cout << "Nhap toa do yB: ";
    std::cin >> B.y;
    std::cout << "Nhap toa do xC: ";
    std::cin >> C.x;
    std::cout << "Nhap toa do yC: ";
    std::cin >> C.y;
    A.print();
    B.print();
    C.print();
    float d_AB, d_AC, d_BC;
    d_AB = get_euclid_distance(A, B);
    d_AC = get_euclid_distance(A, C);
    d_BC = get_euclid_distance(B, C);
    std::cout << "d_AB = " << d_AB << std::endl;
    std::cout << "d_AC = " << d_AC << std::endl;
    std::cout << "d_BC = " << d_BC << std::endl;
    float p, s;
    p = get_perimeter(d_AB, d_AC, d_BC);
    s = get_area(d_AB, d_AC, d_BC);
    std::cout << "Perimeter ABC = " << p << std::endl;
    std::cout << "Area ABC = " << s << std::endl;

    // float a, b, c, p, s;
    // std::cout << "Nhap a: ";
    // std::cin >> a;
    // std::cout << "Nhap b: ";
    // std::cin >> b;
    // std::cout << "Nhap c: ";
    // std::cin >> c;

    // // Kiem tra dieu kien tam giac
    // bool is_triangle = is_a_triangle(a, b, c);

    // //
    // if (is_triangle == true)
    // {
    //     p = get_perimeter(a, b, c);
    //     s = get_area(a, b, c);
    //     std::cout << "a = " << a << std::endl;
    //     std::cout << "b = " << b << std::endl;
    //     std::cout << "c = " << c << std::endl;
    //     std::cout << "p = " << p << std::endl;
    //     std::cout << "s = " << s << std::endl;
    // }
    // else
    // {
    //     std::cout << "Not a triangle\n";
    // }
    // std::cout << "____\n";
}
