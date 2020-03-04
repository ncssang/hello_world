// // Khai bao thu vien
// #include <iostream>
// #include <string>

// // Chuong trinh chinh
// int main()
// {
//     // int la kieu so nguyen 32 bit
//     int string, b;
//     string = 10;
//     b = 20;
//     std::cout << string << std::endl;
//     std::cout << b << std::endl;

//     // khai bao bien c kieu nguyen 32 bit
//     int c;
//     c = string + b;
//     std::cout << c << std::endl;
//     std::cout << "__________" << std::endl;

//     float a_f, b_f;
//     float c_f;
//     a_f = 1.5;
//     b_f = 1.5;
//     c_f = a_f * b_f;
//     std::cout << "HAa_fHa: " << a_f << std::endl;
//     std::cout << "b_fHa: " << b_f << std::endl;
//     std::cout << "c_fIT: " << c_f << std::endl;

//     std::cout << "_________\n";

//     // Khai bao bien kieu string
//     std::string string_1 = "Quang";
//     std::string string_2 = "Sang";
//     std::string string_bro = string_1 + " "  + string_2;
//     // std::cout << string_1 << " " << string_2 << std::endl;
//     std::cout << string_bro << std::endl;
//     return 0;
// }
#include <iostream>
#include <stdio.h>
// #include<curses.h>
#include <string.h>
int main()
{
    // clrscr();
    // char string[20];
    // int i, y;
    // printf("\nNhap xau ky tu:   ");
    // scanf("%s", string);
    // y = strlen(string);
    // printf("\nXau dao nguoc la: ");
    std::string string1;
    std::cout << "Nhap xau ki tu: ";
    std::cin >> string1;
    for (size_t i = 0; i < string1.size(); ++i)
    {
        if (string1[i] >= 65 && string1[i] <= 90)
        {
            string1[i] += 32;
        }
        else if (string1[i] >= 97 && string1[i] <= 122)
        {
            string1[i] -= 32;
        }
    }
    std::cout << string1 << std::endl;
    return 0;
}