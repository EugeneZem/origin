#include <iostream>
#include "quadrangles.h"
#include "figure.h"

Quadrangle::Quadrangle() {}

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

void Quadrangle::print_info()
{
    std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}

Rectangle::Rectangle(double a, double b)
{
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = 90;
    this->B = 90;
    this->C = 90;
    this->D = 90;
}

Square::Square(double a)
{
    sideCounter = 4;
    this->a = a;
    this->b = a;
    this->c = a;
    this->d = a;
    this->A = 90;
    this->B = 90;
    this->C = 90;
    this->D = 90;
}

Parallelogram::Parallelogram(double a, double b, double A, double B)
{
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
}

Rhomb::Rhomb(double a, double A, double B)
{
    sideCounter = 4;
    this->a = a;
    this->b = a;
    this->c = a;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
}