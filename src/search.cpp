#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::ifstream input_file_stream;
    input_file_stream.open("input.txt");
    std::vector<int> number_seq;
    if (input_file_stream.is_open())
    {
        std::string line;
        while (std::getline(input_file_stream, line))
        {
            std::stringstream ss_line(line);
            while (!ss_line.eof())
            {
                int value;
                ss_line >> value;
                number_seq.push_back(value);
            }
        }
    }
    input_file_stream.close();

    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        std::cout << "number_seq[" << i << "]"
                  << " = " << number_seq[i] << std::endl;
    }
    std::cout << std::endl;
    int x;
    std::cout << "Nhap x:" << std::endl;
    std::cin >> x;
    bool has_found_x = false;
    size_t x_index = 0;
    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        if (x == number_seq[i])
        {
            has_found_x = true;
            x_index = i;
            break;
        }
    }
    if (has_found_x)
    {
        std::cout << "Number_seq[" << x_index << "]: " << x << std::endl;
    }
    else
    {
        {
            std::cout << "Khong tim thay!" << x << std::endl;
        }
    }

    int max = number_seq[0];
    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        if (max < number_seq[i])
        {
            max = number_seq[i];
        }
    }

    std::cout << "Phan tu lon nhat la: " << max << std::endl;

    int min = number_seq[0];
    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        if (min > number_seq[i])
        {
            min = number_seq[i];
        }
    }
    std::cout << "Phan tu be nhat la: " << min << std::endl;
}
