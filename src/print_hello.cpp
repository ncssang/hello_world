// Khai bao thu vien
#include <iostream>
#include <string>

// Chuong trinh chinh
int main()
{
    // int la kieu so nguyen 32 bit
    int a, b;
    a = 10;
    b = 20;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // khai bao bien c kieu nguyen 32 bit
    int c;
    c = a + b;
    std::cout << c << std::endl;
    std::cout << "__________" << std::endl;

    float a_f, b_f;
    float c_f;
    a_f = 1.5;
    b_f = 1.5;
    c_f = a_f * b_f;
    std::cout << "HAa_fHa: " << a_f << std::endl;
    std::cout << "b_fHa: " << b_f << std::endl;
    std::cout << "c_fIT: " << c_f << std::endl;

    std::cout << "_________\n";

    // Khai bao bien kieu string
    std::string string_1 = "Quang";
    std::string string_2 = "Sang";
    std::string string_bro = string_1 + " "  + string_2;
    // std::cout << string_1 << " " << string_2 << std::endl;
    std::cout << string_bro << std::endl;
    return 0;
}
