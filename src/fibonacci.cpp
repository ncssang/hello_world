#include <iostream>

int Fibonacci(int n);

int main()
{
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;
    int f_n = 0;

    // in ra f(n)
    if (n == 1 || n == 2)
    {
        f_n = 1;
    }
    else
    {

        int f_pre_n = 1;
        f_n = 1;

        for (int i = 3; i <= n; ++i)
        {
            int temp = f_n;
            f_n = f_n + f_pre_n;
            f_pre_n = temp;
        }
    }
    /*
    n = 4;
    f_pre_n = 1;
    f_n = 1;

    //for
    i = 3
    temp = 1
    f_n = 2
    f_pre_n = 1
    i = 4
    temp = 2
    f_n = 3
    f_pre_n = 2
    i = 5 > 4 stop

    f_n = 3
    */

    // std::cout << f_n << std::endl;

    std::cout << "So Fibonacci thu n la: " << Fibonacci(n) << std::endl;
    std::cout << "Day so fibonacci tu 1 den n:" << std::endl;

    for (int i = 1; i <= n; ++i)
    {
        std::cout << "f(" << i << ") = " << Fibonacci(i) << std::endl;
    }
    std::cout << std::endl;

    return 1;
}

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
    //  n = 7 return  = f(6) + f(5) = (f(5) + f(4)) + (f(4) + f(3)) =

    // else
    // {

    //     int i = 3, a;
    //     while (i <= n, ++i)
    //     {
    // a = y;
    // y = x + y;
    // x = a;

    //     }
    //     return y;
    // }
}
// nhap vao 1 so nguyen duong n, hien ra man hinh day so fibonacci nho hon tu f(1) den f(n).
// nhap n = 5.
//in ra man hinh f(1), f(2), f(3), f(4), f(5).
// In ra man hinh
// f(1) = 1
// f(2) = 1
// f(3) = 2
// f(4) = 3
