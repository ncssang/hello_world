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

    float distance_AB = get_euclid_distance(A, B);
    std::cout << "d_AB = " << distance_AB << std::endl;
    float distance_BC = get_euclid_distance(B, C);
    std::cout << "d_BC = " << distance_BC << std::endl;
    float distance_AC = get_euclid_distance(A, C);
    std::cout << "d_AC = " << distance_AC << std::endl;
    Point v_BC;
    v_BC.x = C.x - B.x;
    v_BC.y = C.y - B.y;
    std::cout << "Toa do vector BC la: " << v_BC.x << " " << v_BC.y << std::endl;
    Point v_AC;
    v_AC.x = C.x - A.x;
    v_AC.y = C.y - A.y;
    std::cout << "Toa do vector AC la: " << v_AC.x << " " << v_AC.y << std::endl;

    float D, D_x, D_y;
    D = (v_BC.x * v_AC.y) - (v_AC.x * v_BC.y);
    D_x = ((v_BC.x * A.x + v_BC.y * A.y) * v_AC.y) - ((v_AC.x * B.x + v_AC.y * B.y) * v_BC.y);
    D_y = (v_BC.x * (v_AC.x * B.x + v_AC.y * B.y)) - (v_AC.x * (v_BC.x * A.x + v_BC.y * A.y));

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
        std::cout << "Median_coordinate:" << std::endl;
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