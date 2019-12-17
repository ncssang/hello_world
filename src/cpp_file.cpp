#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::ifstream input_file_stream;
    input_file_stream.open("input.txt");
    // std::ifstream input_file_stream("input.txt");

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
    else
    {
        std::cout << "Find not found.\n";
    }
    input_file_stream.close();

    // In vector ra man hinh
    std::cout << "Before sorting\n";
    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        std::cout << number_seq[i] << " ";
    }
    std::cout << std::endl;

    // Sort
    for (int i = 0; i < (int)(number_seq.size() - 1); ++i)
    {
        for (int j = 0; j < (int)(number_seq.size() - 1 - i); ++j)
        {
            if (number_seq[j] > number_seq[j + 1])
            {
                int temp = number_seq[j];
                number_seq[j] = number_seq[j + 1];
                number_seq[j + 1] = temp;
            }
        }
    }
    std::cout << "After sorting\n";

    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        std::cout << number_seq[i] << " ";
    }
    std::cout << std::endl;

    std::ofstream output_file_stream;
    output_file_stream.open("output.txt");
    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        output_file_stream << number_seq[i] << " ";
    }
    output_file_stream.close();

    // viet chuong trinh viet ra file output.txt   http://www.cplusplus.com/doc/tutorial/files/

    return 0;
}
