// a, b, c, p, s
#include <cmath>
#include <iostream>
#include <string>
int main()
{
    float a, b, c, p, s, half_p;
    a = 3;
    b = 4;
    c = 5;
    p = a + b + c;
    half_p = p / 2;
    s = sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "s = " << s << std::endl;
}