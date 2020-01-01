#include <cmath>
#include <iostream>

struct Point
{
    float x;
    float y;

public:
    Point(float x = 0, float y = 0);
    void print();
};

struct Line
{
    float a;
    float b;
    float c;

public:
    Line(float input_a = 1, float input_b = 1, float input_c = 0);
    void print();
};

Line get_line_equation(Point point_1, Point point_2);
Point get_triangle_centre(Point A, Point B, Point C);
int get_point_sign_on_plane(Point point, Line line);
bool are_points_on_same_side(Point point_1, Point point_2, Line line);
bool is_point_inside_triangle(Point point, Point A, Point B, Point C);

int main()
{
    Point A, B, C, D;
    std::cout << "Enter xA: ";
    std::cin >> A.x;
    std::cout << "Enter yA: ";
    std::cin >> A.y;
    std::cout << "Enter xB: ";
    std::cin >> B.x;
    std::cout << "Enter yB: ";
    std::cin >> B.y;
    std::cout << "Enter xC: ";
    std::cin >> C.x;
    std::cout << "Enter yC: ";
    std::cin >> C.y;
    std::cout << "Enter xD: ";
    std::cin >> D.x;
    std::cout << "Enter yD: ";
    std::cin >> D.y;
    A.print();
    B.print();
    C.print();
    D.print();

    if (!is_point_inside_triangle(D, A, B, C) &&
        !is_point_inside_triangle(A, B, C, D) &&
        !is_point_inside_triangle(B, C, D, A) &&
        !is_point_inside_triangle(C, A, B, D))
    {
        std::cout << "A, B, C, D can make a convex quadrilateral" << std::endl;
        Point v_AB;
        v_AB.x = B.x - A.x;
        v_AB.y = B.y - A.y;
        Point v_AC;
        v_AC.x = C.x - A.x;
        v_AC.y = C.y - A.y;
        Point v_AD;
        v_AD.x = D.x - A.x;
        v_AD.y = D.y - A.y;
        float S_BAC = (v_AB.x * v_AC.y - v_AC.x * v_AB.y) / 2;
        std::cout << "S_BAC " << S_BAC << std::endl;
        int sign_BAC;

        if (S_BAC > 0)
        {
            sign_BAC = 1;
        }
        else
        {
            sign_BAC = -1;
        }
        float S_BAD = (v_AB.x * v_AD.y - v_AD.x * v_AB.y) / 2;
        std::cout << "S_BAD " << S_BAD << std::endl;
        int sign_BAD;
        if (S_BAD > 0)
        {
            sign_BAD = 1;
        }
        else
        {
            sign_BAD = -1;
        }
        float S_CAD = (v_AC.x * v_AD.y - v_AD.x * v_AC.y) / 2;
        std::cout << "S_CAD " << S_CAD << std::endl;
        int sign_CAD;
        if (S_CAD > 0)
        {
            sign_CAD = 1;
        }
        else
        {
            sign_CAD = -1;
        }
        if (sign_BAC > 0)
        {
            if (sign_BAD > 0)
            {
                if (sign_CAD > 0) //sign_BAC > 0, sign_BAD > 0, sign_CAD > 0.
                {
                    std::cout << "ABCD\n";
                }
                else // sign_BAC > 0, sign_BAD > 0, sign_CAD < 0.
                {
                    std::cout << "ABDC\n";
                }
            }
            else // sign_BAC > 0, sign_BAD < 0 => sign_DAC > 0.
            {
                std::cout << "ADBC\n";
            }
        }
        else // sign_BAC < 0
        {
            if (sign_CAD > 0) // sign_BAC < 0, sign_CAD > 0
            {
                if (sign_BAD > 0) // sign_BAC < 0, sign_CAD > 0, sign_BAD > 0.
                {
                    std::cout << "ACBD\n";
                }
                else // sign_BAC < 0, sign_CAD > 0, sign_BAD < 0.
                {
                    std::cout << "ACDB\n";
                }
            }
            else // sign_BAC < 0, sign_CAD < 0
            {
                std::cout << "ADCB\n";
            }
        }
    }
    else
    {
        std::cout << "A, B, C, D can not make a convex quadrilateral" << std::endl;
    }
}

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Point::print()
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Line::Line(float input_a, float input_b, float input_c)
    : a(input_a), b(input_b), c(input_c)
{
}

void Line::print()
{
    std::cout << a << "*x + " << b << "*y + " << c << " = 0" << std::endl;
}

Line get_line_equation(Point point_1, Point point_2)
{
    Point direction;
    direction.x = point_2.x - point_1.x;
    direction.y = point_2.y - point_1.y;
    Point normal(-direction.y, direction.x);
    // normal.x = -direction.y;
    // normal.y = direction.x;
    Line line;
    line.a = normal.x;
    line.b = normal.y;
    line.c = -(normal.x * point_1.x + normal.y * point_1.y);

    // Tim he so line.a, line.b, line.c

    return line;
}

Point get_triangle_centre(Point A, Point B, Point C)
{
    Point M;
    M.x = (C.x + B.x) / 2;
    M.y = (C.y + B.y) / 2;

    Point v_AM;
    v_AM.x = (M.x - A.x);
    v_AM.y = (M.y - A.y);
    Point v_AI;
    v_AI.x = (2.0 / 3) * v_AM.x;
    v_AI.y = (2.0 / 3) * v_AM.y;

    Point I;
    I.x = A.x + v_AI.x;
    I.y = A.y + v_AI.y;

    return I;
}

int get_point_sign_on_plane(Point point, Line line)
{
    float left_side_line = line.a * point.x + line.b * point.y + line.c;
    if (left_side_line > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

bool are_points_on_same_side(Point point_1, Point point_2, Line line)
{
    int sign_point_1 = get_point_sign_on_plane(point_1, line);
    int sign_point_2 = get_point_sign_on_plane(point_2, line);
    if (sign_point_1 * sign_point_2 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_point_inside_triangle(Point point, Point A, Point B, Point C)
{
    Line line_AB = get_line_equation(A, B);
    Line line_BC = get_line_equation(B, C);
    Line line_CA = get_line_equation(C, A);
    Point centre_ABC = get_triangle_centre(A, B, C);

    if (are_points_on_same_side(point, centre_ABC, line_AB) &&
        are_points_on_same_side(point, centre_ABC, line_BC) &&
        are_points_on_same_side(point, centre_ABC, line_CA))
    {
        return true;
    }
    else
    {
        return false;
    }
}