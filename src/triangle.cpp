// a, b, c, p, s
#include <cmath>
#include <iostream>
#include <string>

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

int main()
{
    float a, b, c, p, s, half_p;
    std::cout << "Nhap a: ";
    std::cin >> a;
    std::cout << "Nhap b: ";
    std::cin >> b;
    std::cout << "Nhap c: ";
    std::cin >> c;

    // Kiem tra dieu kien tam giac
    bool is_triangle = is_a_triangle(a, b, c);

    //
    if (is_triangle == true)
    {
        p = a + b + c;
        half_p = p / 2;
        s = sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl;
        std::cout << "p = " << p << std::endl;
        std::cout << "s = " << s << std::endl;
    }
    else
    {
        std::cout << "Not a triangle\n";
    }
    std::cout << "____\n";

    float A, B, C, P, S, HALF_P;
    std::cout << "Nhap A: ";
    std::cin >> A;
    std::cout << "Nhap B: ";
    std::cin >> B;
    std::cout << "Nhap C: ";
    std::cin >> C;

    // Kiem tra dieu kien tam giac
    bool IS_TRIANGLE = is_a_triangle(A, B, C);

    //
    if (IS_TRIANGLE == true)
    {
        P = A + B + C;
        HALF_P = P / 2;
        S = sqrt(HALF_P * (HALF_P - A) * (HALF_P - B) * (HALF_P - C));
        std::cout << "A = " << A << std::endl;
        std::cout << "B = " << B << std::endl;
        std::cout << "C = " << C << std::endl;
        std::cout << "P = " << p << std::endl;
        std::cout << "S = " << S << std::endl;
    }
    else
    {
        std::cout << "Not a triangle\n";
    }
}