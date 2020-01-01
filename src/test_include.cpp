#include "hello_world/geometry.hpp"

int main()
{
    Point point_1(1, 2), point_2(3, 5);
    float d = get_euclid_distance(point_1, point_2);
    std::cout << "d = " << d << std::endl;

    return 0;
}
