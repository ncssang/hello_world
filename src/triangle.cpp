// a, b, c, p, s
#include <cmath>
#include <iostream>
#include <string>

struct Point
{
    float x;
    float y;
    void print()
    {
        std::cout << x << " " << y << std::endl;
    }
};

float get_euclid_distance(Point point_1, Point point_2)
{
    float d_x = point_1.x - point_2.x;
    float d_y = point_1.y - point_2.y;
    float distance = sqrt(d_x * d_x + d_y * d_y);
    return distance;
}

bool is_a_triangle(float a, float b, float c)
{
    bool is_triangle;
    if (a + b < c || a + c < b || b + c < a)
    {
        is_triangle = false;
    }
    else
    {
        is_triangle = true;
    }

    return is_triangle;
}

float get_perimeter(float a, float b, float c)
{
    return (a + b + c);
}

float get_area(float a, float b, float c)
{
    float half_p = get_perimeter(a, b, c) / 2;
    float area = sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));
    return area;
}

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