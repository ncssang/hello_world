#include <iostream>

struct Point3d
{
    float x;
    float y;
    float z;
    Point3d(float input_x = 0, float input_y = 0, float input_z = 0)
    {
        // std::cout << "Constructor\n";
        x = input_x;
        y = input_y;
        z = input_z;
    }
    void print()
    {
        std::cout << x << " " << y << " " << z << "\n";
    }
};

struct Plane
{
    float a;
    float b;
    float c;
    float d;
    Plane(float default_a = 1, float default_b = 1, float default_c = 1, float default_d = 1)
        : a(default_a), b(default_b), c(default_c), d(default_d)
    {
        // std::cout << "Constructor\n";
    }
    void print()
    {
        std::cout << a << " " << b << " " << c << " " << d << "\n";
    }
};

int main()
{
    // Point3d point;
    // std::cout << "Nhap x: ";
    // std::cin >> point.x;
    // std::cout << "Nhap y: ";
    // std::cin >> point.y;
    // std::cout << "Nhap z: ";
    // std::cin >> point.z;

    // Plane plane;
    // std::cout << "Nhap a:";
    // std::cin >> plane.a;
    // std::cout << "Nhap b:";
    // std::cin >> plane.b;
    // std::cout << "Nhap c:";
    // std::cin >> plane.c;
    // std::cout << "Nhap d:";
    // std::cin >> plane.d;

    // point.print();
    // plane.print();
    // float t = (-plane.a * point.x - plane.b * point.y - plane.c * point.z - plane.d) /
    //           (plane.a * plane.a + plane.b * plane.b + plane.c * plane.c);
    // Point3d projection;
    // projection.x = point.x + plane.a * t;
    // projection.y = point.y + plane.b * t;
    // projection.z = point.z + plane.c * t;

    // projection.print();

    Point3d point_A;
    std::cout << "Nhap point_A.x: ";
    std::cin >> point_A.x;
    std::cout << "Nhap point_A.y: ";
    std::cin >> point_A.y;
    std::cout << "Nhap point_A.z: ";
    std::cin >> point_A.z;
    Point3d point_B;
    std::cout << "Nhap point_B.x: ";
    std::cin >> point_B.x;
    std::cout << "Nhap point_B.x: ";
    std::cin >> point_B.y;
    std::cout << "Nhap point_B.x: ";
    std::cin >> point_B.z;
    Point3d v_AB;
    v_AB.x = point_B.x - point_A.x;
    v_AB.y = point_B.y - point_A.y;
    v_AB.z = point_B.z - point_A.z;

    Plane plane_D;
    std::cout << "Nhap a:";
    std::cin >> plane_D.a;
    std::cout << "Nhap b:";
    std::cin >> plane_D.b;
    std::cout << "Nhap c:";
    std::cin >> plane_D.c;
    std::cout << "Nhap d:";
    std::cin >> plane_D.d;

    point_A.print();
    point_B.print();
    v_AB.print();
    plane_D.print();

    float D = (plane_D.a * v_AB.x + plane_D.b * v_AB.y + plane_D.c * v_AB.z);
    if (D == 0)
    {
        float A = (point_A.x * plane_D.a + point_A.y * plane_D.b + point_A.z * plane_D.c + plane_D.d);
        if (A == 0)
        {
            std::cout << "Duong thang da cho nam tren mat phang! \n";
        }
        else
        {
            std::cout << "Duong thang da cho song song voi mat phang! \n";
        }
    }
    else
    {
        float T = (-plane_D.a * point_A.x - plane_D.b * point_A.y - plane_D.c * point_A.z - plane_D.d) /
                  (plane_D.a * v_AB.x + plane_D.b * v_AB.y + plane_D.c * v_AB.z);
        Point3d projection;
        projection.x = point_A.x + v_AB.x * T;
        projection.y = point_A.y + v_AB.y * T;
        projection.z = point_A.z + v_AB.z * T;
        projection.print();
    }

    return 0;
}
