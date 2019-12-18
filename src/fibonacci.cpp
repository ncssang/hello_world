#include <iostream>

int Fibonacci(int n)
{
    //int x = 1, y = 1;

    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

    //  n = 1 return 1
    //  n = 2 return 1
    //  n = 3 return f(2) + f1 = 1 + 1 = 2
    //  n = 4 return f(3) + f(2) = 2 + 1 = 3
    //  n = 7 return  = f(6) + f(5) = (f(5) + f(4)) + (f(4) + f(3))

    // else
    // {

    //     int i = 3, a;
    //     while (i < n, ++i)
    //     {

    //         // a = x + y;
    //         // x = y;
    //         // y = a;
    //     }
    //     return a;
    // }
}

int main()
{
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;
    std::cout << "So Fibonacci thu n la: " << Fibonacci(n) << std::endl;
    std::cout << "Day so fibonacci tu 1 den n:" << std::endl;

    for (int i = 1; i <= n; ++i)
    {
        std::cout << "f(" << i << ") = " << Fibonacci(i) << std::endl;
    }
    std::cout << std::endl;

    return 1;
}
// nhap vao 1 so nguyen duong n, hien ra man hinh day so fibonacci nho hon tu f(1) den f(n).
// nhap n = 5.
//in ra man hinh f(1), f(2), f(3), f(4), f(5).
// In ra man hinh
// f(1) = 1
// f(2) = 1
// f(3) = 2
// f(4) = 3