#include <cmath>
#include <iostream>

#include "hello_world/geometry.hpp"

int main()
{
    Point A, B, C, D;
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
    std::cout << "Enter xD: ";
    std::cin >> D.x;
    std::cout << "Enter yD: ";
    std::cin >> D.y;
    A.print();
    B.print();
    C.print();
    D.print();

    if (!is_point_inside_triangle(D, A, B, C) &&
        !is_point_inside_triangle(A, B, C, D) &&
        !is_point_inside_triangle(B, C, D, A) &&
        !is_point_inside_triangle(C, A, B, D))
    {
        std::cout << "A, B, C, D can make a convex quadrilateral" << std::endl;
        Point v_AB;
        v_AB.x = B.x - A.x;
        v_AB.y = B.y - A.y;
        Point v_AC;
        v_AC.x = C.x - A.x;
        v_AC.y = C.y - A.y;
        Point v_AD;
        v_AD.x = D.x - A.x;
        v_AD.y = D.y - A.y;
        float S_BAC = (v_AB.x * v_AC.y - v_AC.x * v_AB.y) / 2;
        std::cout << "S_BAC " << S_BAC << std::endl;
        int sign_BAC;

        if (S_BAC > 0)
        {
            sign_BAC = 1;
        }
        else
        {
            sign_BAC = -1;
        }
        float S_BAD = (v_AB.x * v_AD.y - v_AD.x * v_AB.y) / 2;
        std::cout << "S_BAD " << S_BAD << std::endl;
        int sign_BAD;
        if (S_BAD > 0)
        {
            sign_BAD = 1;
        }
        else
        {
            sign_BAD = -1;
        }
        float S_CAD = (v_AC.x * v_AD.y - v_AD.x * v_AC.y) / 2;
        std::cout << "S_CAD " << S_CAD << std::endl;
        int sign_CAD;
        if (S_CAD > 0)
        {
            sign_CAD = 1;
        }
        else
        {
            sign_CAD = -1;
        }
        if (sign_BAC > 0)
        {
            if (sign_BAD > 0)
            {
                if (sign_CAD > 0) //sign_BAC > 0, sign_BAD > 0, sign_CAD > 0.
                {
                    std::cout << "ABCD\n";
                }
                else // sign_BAC > 0, sign_BAD > 0, sign_CAD < 0.
                {
                    std::cout << "ABDC\n";
                }
            }
            else // sign_BAC > 0, sign_BAD < 0 => sign_DAC > 0.
            {
                std::cout << "ADBC\n";
            }
        }
        else // sign_BAC < 0
        {
            if (sign_CAD > 0) // sign_BAC < 0, sign_CAD > 0
            {
                if (sign_BAD > 0) // sign_BAC < 0, sign_CAD > 0, sign_BAD > 0.
                {
                    std::cout << "ACBD\n";
                }
                else // sign_BAC < 0, sign_CAD > 0, sign_BAD < 0.
                {
                    std::cout << "ACDB\n";
                }
            }
            else // sign_BAC < 0, sign_CAD < 0
            {
                std::cout << "ADCB\n";
            }
        }
    }
    else
    {
        std::cout << "A, B, C, D can not make a convex quadrilateral" << std::endl;
    }
}
