#include <iostream>
#include <vector>

int main()
{
    // std::vector<int> array(5, 0); // Khoi tao vecto 5 phan tu gia tri mac dinh = 0
    // // int array[5];
    // array[0] = 19;
    // array[1] = 18;
    // array[2] = 17;
    // array[3] = 16;
    // array[4] = 15;

    std::vector<int> array;
    array.push_back(19);
    array.push_back(18);
    array.push_back(17);
    array.push_back(16);
    array.push_back(15);
    array.push_back(11);
    array.push_back(13);
    array.push_back(99);
    std::cout << "Size " << array.size() << std::endl;
    for (int j = 0; j < (int)(array.size() - 1); ++j)
    {
        for (int i = 0; i < (int)(array.size() - 1 - j); ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }
    }

    for (size_t i = 0; i < array.size(); ++i)
    {
        std::cout << i << " : " << array[i] << std::endl;
    }
}
