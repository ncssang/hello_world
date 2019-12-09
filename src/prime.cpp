// Nhap vao 1 so nguyen tu ban phim, kiem tra xem co la so nguyen to khong
#include <iostream>
#include <string>

bool is_a_prime_number(int n)
{
    bool is_prime = true;
    if ((n == 1) || (n == 2))
    {
        is_prime = true;
    }
    else
    {
        for (int i = 2; i < n; ++i)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }
    return is_prime;
}

int main()
{
    int a;

    do
    {
        std::cout << "Nhap a: ";
        std::cin >> a;
    } while (a < 0);

    // a = -1;
    // while (a < 0)
    // {
    //     std::cout << "Nhap a: ";
    //     std::cin >> a;
    // }

    // Print
    if (is_a_prime_number(a) == true)
    {
        std::cout << a << " is a prime number.\n";
    }
    else
    {
        std::cout << a << " is not a prime number.\n";
    }
}


// Nhap vao mot so nguyen duong a, in ra man hinh tat ca cac so nguyen to nho hon a
