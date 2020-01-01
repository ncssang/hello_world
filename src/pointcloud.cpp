#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

struct Point3d
{
    float x;
    float y;
    float z;
    void print();
};

float get_euclid_distance_squared(Point3d point_1, Point3d point_2);

float get_standard_deviation(std::vector<Point3d> points);

int main()
{

    std::ifstream point_file;
    point_file.open("pointcloud.txt");

    std::vector<Point3d> points;
    if (point_file.is_open())
    {
        std::string line;
        while (std::getline(point_file, line))
        {
            std::stringstream s_stream(line);
            while (!s_stream.eof())
            {
                Point3d point;
                s_stream >> point.x;
                s_stream >> point.y;
                s_stream >> point.z;
                points.push_back(point);
            }
        }
    }
    point_file.close();

    float standard_deviation = get_standard_deviation(points);
    std::cout << standard_deviation << std::endl;

    // Tim x_min.
    float x_min = points[0].y;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (x_min > points[i].x)
        {
            x_min = points[i].x;
        }
    }
    std::cout << "Phan tu x nho nhat la: " << x_min << std::endl;

    // Tim x_max
    float x_max = points[0].x;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (x_max < points[i].x)
        {
            x_max = points[i].x;
        }
    }
    std::cout << "Phan tu x lon nhat la: " << x_max << std::endl;

    // Tim y_min
    float y_min = points[0].y;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (y_min > points[i].y)
        {
            y_min = points[i].y;
        }
    }
    std::cout << "Phan tu y nho nhat la: " << y_min << std::endl;

    //Tim y_max
    float y_max = points[0].y;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (y_max < points[i].y)
        {
            y_max = points[i].y;
        }
    }
    std::cout << "Phan tu y lon nhat la: " << y_max << std::endl;

    //Tim z_min.
    float z_min = points[0].z;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (z_min > points[i].z)
        {
            z_min = points[i].z;
        }
    }
    std::cout << "Phan tu z nho nhat la: " << z_min << std::endl;

    // Tim z_max
    float z_max = points[0].z;
    for (size_t i = 0; i < points.size(); ++i)
    {
        if (z_max < points[i].z)
        {
            z_max = points[i].z;
        }
    }
    std::cout << "Phan tu z lon nhat la: " << z_max << std::endl;

    //  tim y_max x_max, y_min y max, diem trung binh,
    return 0;
}

void Point3d::print()
    {
        std::cout << x << " " << y << " " << z << std::endl;
    }

float get_euclid_distance_squared(Point3d point_1, Point3d point_2)
{
    float d_x = point_1.x - point_2.x;
    float d_y = point_1.y - point_2.y;
    float d_z = point_1.z - point_2.z;
    float distance_squared = d_x * d_x + d_y * d_y + d_z * d_z;
    return distance_squared;
}

float get_standard_deviation(std::vector<Point3d> points)
{
    Point3d average_point;
    average_point.x = 0;
    average_point.y = 0;
    average_point.z = 0;
    for (size_t i = 0; i < points.size(); ++i)
    {
        average_point.x += points[i].x;
        average_point.y += points[i].y;
        average_point.z += points[i].z;
    }
    average_point.x = average_point.x / points.size();
    average_point.y = average_point.y / points.size();
    average_point.z = average_point.z / points.size();
    // average_point.x /= points.size();
    // average_point.x /= points.size();
    average_point.print();
    // average_point.add_one();
    // average_point.print();

    float D = 0;
    for (size_t i = 0; i < points.size(); ++i)
    {
        D += get_euclid_distance_squared(points[i], average_point);
    }
    float SD;
    SD = sqrt(D/ (points.size() - 1));


    return SD;
}
