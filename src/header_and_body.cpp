#include <iostream>

float double_add(float a);
float add(float a);

int main()
{
    float a = 1;
    float b = double_add(a);
    std::cout << b << std::endl;
    return 0;
}

float double_add(float a)
{
    float med = add(a);
    float result = add(med);
    return result;
}

float add(float a)
{
    return a + 1;
}
