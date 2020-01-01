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

    Point H;
    H.x = (C.x + B.x) / 2;
    H.y = (C.y + B.y) / 2;
    H.print();

    Point v_AH;
    v_AH.x = H.x - A.x;
    v_AH.y = H.y - A.y;
    H.print();

    float d_AH = get_euclid_distance(A, H);
    std::cout << "d_AH: " << d_AH << std::endl;

    float d_AG = (d_AH * 2) / 3;
    std::cout << "d_AG = " << d_AG << std::endl;

    Point v_AG;
    v_AG.x = (d_AG / d_AH) * v_AH.x;
    v_AG.y = (d_AG / d_AH) * v_AH.y;
    v_AG.print();

    Point G;
    G.x = A.x + v_AG.x;
    G.y = A.y + v_AG.y;
    G.print();
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

// int main()
// {
//     Point A, B, C;
//     std::cout << "Enter xA: ";
//     std::cin >> A.x;
//     std::cout << "Enter yA: ";
//     std::cin >> A.y;
//     std::cout << "Enter xB: ";
//     std::cin >> B.x;
//     std::cout << "Enter yB: ";
//     std::cin >> B.y;
//     std::cout << "Enter xC: ";
//     std::cin >> C.x;
//     std::cout << "Enter yC: ";
//     std::cin >> C.y;
//     A.print();
//     B.print();
//     C.print();
//     Point I, H;
//     I.x = (C.x + A.x) / 2;
//     I.y = (C.y + A.y) / 2;
//     H.x = (C.x + B.x) / 2;
//     H.y = (C.y + B.y) / 2;
//     I.print();
//     H.print();
//     Point v_AH;
//     v_AH.x = H.x - A.x;
//     v_AH.y = H.y - A.y;
//     v_AH.print();

//     Point v_Am;
//     v_Am.x = - v_AH.y;
//     v_Am.y = v_AH.x;
//     v_Am.print();

//     Point v_BI;
//     v_BI.x = I.x - B.x;
//     v_BI.y = I.y - B.y;
//     v_BI.print();

//     Point v_Bn;
//     v_Bn.x = - v_BI.y;
//     v_Bn.y = v_BI.x;
//     v_Bn.print();

//     float a1, b1, c1, a2, b2, c2;
//     a1 = v_Am.x;
//     b1 = v_Am.y;
//     c1 = v_Am.x * A.x + v_Am.y * A.y;
//     a2 = v_Bn.x;
//     b2 = v_Bn.y;
//     c2 = v_Bn.x * B.x + v_Bn.y * B.y;

//     float D, D_x, D_y;
//     D = a1 * b2 - a2 * b1;
//     std::cout << "D = " << D << std::endl;
//     D_x = c1 * b2 - c2 * b1;
//     std::cout << "D_x = " << D_x << std::endl;
//     D_y = a1 * c2 - a2 * c1;
//     std::cout << "D_y = " << D_y << std::endl;

//     if (D == 0)
//     {
//         if (D_x != 0 || D_y != 0)
//         {
//             std::cout << "Ba diem da cho khong phai la tam giac!" << std::endl;
//         }
//         else
//         {
//             std::cout << "Ba diem da cho khong phai la tam giac!" << std::endl;
//         }
//     }
//     else
//     {
//         std::cout << "Midperpendicular: " << std::endl;
//         std::cout << "x = " << D_x / D << std::endl;
//         std::cout << "y = " << D_y / D << std::endl;
//     }
// }
