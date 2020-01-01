#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

float get_standard_deviation(std::vector<float> heights);

int main()
{
    std::ifstream height_file;
    height_file.open("height.txt");

    std::vector<float> number_seq;
    if (height_file.is_open())
    {
        std::string line;
        while (std::getline(height_file, line))
        {
            std::stringstream s_stream(line);
            while (!s_stream.eof())
            {
                float value;
                s_stream >> value;
                number_seq.push_back(value);
            }
        }
    }
    height_file.close();

    for (size_t i = 0; i < number_seq.size(); ++i)
    {
        std::cout << number_seq[i] << " ";
    }
    std::cout << std::endl;

    float standard_deviation = get_standard_deviation(number_seq);
    std::cout << standard_deviation << std::endl;

    return 0;
}

float get_standard_deviation(std::vector<float> heights)
{
    float sum = 0;
    for (size_t i = 0; i < heights.size(); ++i)
    {
        sum += heights[i];
    }
    std::cout << "Sum: " << sum << std::endl;

    float average;
    average = sum / heights.size();
    std::cout << "Average: " << average << std::endl;
    float D = 0;
    for (size_t i = 0; i < heights.size(); ++i)
    {
        D += (heights[i] - average) * (heights[i] - average);
    }

    float SD;
    SD = sqrt(D / (heights.size() - 1));
    return SD;
}


//viet ham tinh gia tri cua so thu n trong chuoi so fibonaci
// int get_Fibonaci(int n)
// {
//     return fn;
// }