#include <iostream>

int main()
{
    int array[5];
    array[0] = 19;
    array[1] = 18;
    array[2] = 17;
    array[3] = 16;
    array[4] = 15;
    for (int j = 0; j < 4; ++j)
    {
        for (int i = 0; i < 4 - j; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << " : " << array[i] << std::endl;
    }
}
