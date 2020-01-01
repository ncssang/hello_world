#include <cmath>
#include <iostream>

struct Point
{
    float x;
    float y;
    void print();
};

float get_euclid_distance(Point point_1, Point point_2);

int main()
{
    Point A, B, C;
    std::cout << "Enter xA: ";
    std::cin >> A.x;
    std::cout << "Enter yA: ";
    std::cin >> A.y;
    std::cout << "Enter xB: ";
    std::cin >> B.x;
    std::cout << "Enter yB: ";
    std::cin >> B.y;
    std::cout << "Enter xC: ";
    std::cin >> C.x;
    std::cout << "Enter yC: ";
    std::cin >> C.y;
    A.print();
    B.print();
    C.print();

    Point I, H;
    I.x = (C.x + A.x) / 2;
    I.y = (C.y + A.y) / 2;
    H.x = (C.x + B.x) / 2;
    H.y = (C.y + B.y) / 2;
    std::cout << "Toa do trung diem I cua AC: " << I.x << " " << I.y << std::endl;
    std::cout << "Toa do trung diem H cua BC: " << H.x << " " << H.y << std::endl;
    Point v_AC;
    v_AC.x = C.x - A.x;
    v_AC.y = C.y - A.y;
    std::cout << "Toa do vector AC la: " << v_AC.x << " " << v_AC.y << std::endl;

    Point v_BC;
    v_BC.x = C.x - B.x;
    v_BC.y = C.y - B.y;
    std::cout << "Toa do vector BC la: " << v_BC.x << " " << v_BC.y << std::endl;

    float a1, b1, c1, a2, b2, c2;
    a1 = v_AC.x;
    b1 = v_AC.y;
    c1 = v_AC.x * I.x + v_AC.y * I.y;
    a2 = v_BC.x;
    b2 = v_BC.y;
    c2 = v_BC.x * H.x + v_BC.y * H.y;

    float D, D_x, D_y;
    D = a1 * b2 - a2 * b1;
    std::cout << "D = " << D << std::endl;
    D_x = c1 * b2 - c2 * b1;
    std::cout << "D_x = " << D_x << std::endl;
    D_y = a1 * c2 - a2 * c1;
    std::cout << "D_y = " << D_y << std::endl;

    if (D == 0)
    {
        if (D_x != 0 || D_y != 0)
        {
            std::cout << "Ba diem da cho khong phai la tam giac!" << std::endl;
        }
        else
        {
            std::cout << "Ba diem da cho khong phai la tam giac!" << std::endl;
        }
    }
    else
    {
        std::cout << "Midperpendicular: " << std::endl;
        std::cout << "x = " << D_x / D << std::endl;
        std::cout << "y = " << D_y / D << std::endl;
    }
}

void Point::print()
{
    std::cout << x << " " << y << std::endl;
}

float get_euclid_distance(Point point_1, Point point_2)
{
    float d_x = point_1.x - point_2.x;
    float d_y = point_1.y - point_2.y;
    float distance = sqrt(d_x * d_x + d_y * d_y);
    return distance;
}
