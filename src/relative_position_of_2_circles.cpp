#include <cmath>
#include <iostream>

#include "hello_world/geometry.hpp"

int main()

{
    Circle circle_1, circle_2;
    std::cout << "Enter the first circle: \n";
    std::cout << "circle_1.centre.x = ";
    std::cin >> circle_1.centre.x;
    std::cout << "circle_1.center.y = ";
    std::cin >> circle_1.centre.y;
    do
    {
        std::cout << "circle_1.radius  = ";
        std::cin >> circle_1.radius;
    } while (circle_1.radius < 0);
    std::cout << "Enter the second circle: \n";
    std::cout << "circle_2.centre.x = ";
    std::cin >> circle_2.centre.x;
    std::cout << "circle_2.center.y = ";
    std::cin >> circle_2.centre.y;
    do
    {
        std::cout << "circle_2.radius  = ";
        std::cin >> circle_2.radius;
    } while (circle_2.radius < 0);
    std::cout << "Done inputing data.\n";
    std::cout << "Start precessing data.\n";
    circle_1.print();
    circle_2.print();
    float distance = get_euclid_distance(circle_1.centre, circle_2.centre);
    std::cout << distance << std::endl;
    if (distance > (circle_1.radius + circle_2.radius))
    {
        std::cout << "Hai duong tron roi xa nhau!\n";
    }
    else
    {
        if (distance < (fabs(circle_1.radius - circle_2.radius)))
        {
            std::cout << "Hai duong tron long nhau!\n";
        }
        else
        {
            {
                if (distance == (circle_1.radius + circle_2.radius))

                {
                    std::cout << "Hai duong tron co 1 diem tiep xuc ngoai!\n";
                }
                else
                {
                    if (distance == fabs(circle_1.radius - circle_2.radius))
                    {
                        std::cout << "Hai duong trong co 1 diem tiep xuc trong!\n";
                    }
                    else
                    {
                        if (distance > fabs(circle_1.radius - circle_2.radius && distance < circle_1.radius + circle_2.radius))
                        {
                            std::cout << "Hai duong tron co 2 diem tiep xuc!\n";
                            float area_c_c1_a = get_area(distance, circle_1.radius, circle_2.radius);
                            std::cout << " area_ ACC1: " << area_c_c1_a << std::endl;
                            float d_AI = (2 * (area_c_c1_a)) / distance;
                            std::cout << "d_AI: " << d_AI << std::endl;
                            float d_CA = circle_2.radius;
                            float d_CI;
                            d_CI = sqrt(d_CA * d_CA - d_AI * d_AI);
                            std::cout << "d_CI: " << d_CI << std::endl;
                            Point v_c_c1;
                            v_c_c1.x = circle_1.centre.x - circle_2.centre.x;
                            v_c_c1.y = circle_1.centre.y - circle_2.centre.y;
                            std::cout << "Toa do vector CC1: " << v_c_c1.x << " " << v_c_c1.y << std::endl;
                            Point v_C_I;
                            v_C_I.x = (d_CI / distance) * v_c_c1.x;
                            v_C_I.y = (d_CI / distance) * v_c_c1.y;
                            std::cout << "Toa do vector CI: " << v_C_I.x << " " << v_C_I.y << std::endl;
                            Point I;
                            I.x = circle_2.centre.x + v_C_I.x;
                            I.y = circle_2.centre.y + v_C_I.y;
                            std::cout << "Toa do I:" << I.x << " " << I.y << std::endl;
                            Point E_F;
                            E_F.x = v_c_c1.y;
                            E_F.y = -v_c_c1.x;
                            std::cout << "Toa do vector chi phuong cua IA: " << E_F.x << " " << E_F.y << std::endl;
                            float d_EF = sqrt(E_F.x * E_F.x + E_F.y * E_F.y);
                            std::cout << "Do dai vecto chi phuong cua IA: " << d_EF << std::endl;
                            Point v_IA;
                            v_IA.x = (d_AI / d_EF) * E_F.x;
                            v_IA.y = (d_AI / d_EF) * E_F.y;
                            std::cout << "Toa do vector IA: " << v_IA.x << " " << v_IA.y << std::endl;
                            Point A;
                            A.x = v_IA.x + I.x;
                            A.y = v_IA.y + I.y;
                            std::cout << "Toa do A: " << A.x << " " << A.y << std::endl;
                            Point B;
                            B.x = 2 * I.x - A.x;
                            B.y = 2 * I.y - A.y;
                            std::cout << "Toa do B: " << B.x << " " << B.y << std::endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}


