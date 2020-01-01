// Nhap vao 1 so nguyen tu ban phim, kiem tra xem co la so nguyen to khong
#include <iostream>
#include <string>

bool is_a_prime_number(int n);

int main()
{
    int a;

    do
    {
        std::cout << "Nhap a: ";
        std::cin >> a;
    } while (a < 0);

    for (int i = 1; i < a; i++)
    {
        if (is_a_prime_number(i) == true)
        {
            std::cout << i << std::endl;
        }
    }
}

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

// Nhap vao mot so nguyen duong a, in ra man hinh tat ca cac so nguyen to nho hon a
