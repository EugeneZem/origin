#include <iostream>
#include "triangles.h"
#include "figure.h"
#include "exceptions.h"

Triangle::Triangle() {};

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    if ((A + B + C) != 180) { throw MyException("сумма углов не равна 180"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "Треугольник";
    
}

void Triangle::print_info ()
{
    std::cout << name;
    std::cout << "(cтроны: " << a << ", " << b << "," << c;
    std::cout << "; углы: " << A << ", " << B << ", " << C << ") создан" << std::endl;
}

TriangleRight::TriangleRight(double a, double b, double c, double A, double B, double C)
{
    if (C != 90) { throw MyException("угол С не равен 90"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "Правильный треугольник";
}

TriangleIsosceles::TriangleIsosceles(double a, double b, double c, double A, double B, double C)
{
    if (a != c || A != C) { throw MyException("стороны a и c, а так же углы A и C должны быть равны"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->name = "Равнобедренный треугольник";
}

TriangleEquilateral::TriangleEquilateral(double a, double b, double c, double A, double B, double C)
{
    if ((a != b) || (a != c) || (b != c) || (A != 60) || (B != 60) || (C != 60)) { throw MyException("все стороны быть равны, все углы должны быть равны 60"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "Равносторонний треугольник";
}