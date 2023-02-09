#include <iostream>
#include "triangles.h"
#include "figure.h"

Triangle::Triangle() {};

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

void Triangle::print_info()
{
    std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}

TriangleRight::TriangleRight(double a, double b, double c, double A, double B)
{
    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 90;
}

TriangleIsosceles::TriangleIsosceles(double a, double b, double A, double B)
{
    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = a;
    this->A = A;
    this->B = B;
    this->C = A;
}

TriangleEquilateral::TriangleEquilateral(double a)
{
    sideCounter = 3;
    this->a = a;
    this->b = a;
    this->c = a;
    this->A = 60;
    this->B = 60;
    this->C = 60;
}