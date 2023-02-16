#include <iostream>
#include "quadrangles.h"
#include "figure.h"
#include "exceptions.h"

Quadrangle::Quadrangle() {}

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if ((A + B + C + D) != 360) { throw MyException("сумма углов не равна 360"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "Четырехугольник";
}

void Quadrangle::print_info()
{
    std::cout << name;
    std::cout << "(cтроны: " << a << ", " << b << ", " << c << ", " << d;
    std::cout << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}

Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a!=c || b!=d || A != 90 ||  B != 90 || C != 90 || D != 90 ) { throw MyException("стороны a, c и b, d должны быть попарно равны, все углы должны быть равны 90"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "Прямоугольник";
}

Square::Square(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != b || a != c || a != d || b != c || b != d || c != b || A != 90 || B != 90 || C != 90 || D != 90) { throw MyException("все стороны должны быть равны, все углы должны быть равны 90"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "Квадрат";
}

Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != c || b != d  || A != C || B != D) { throw MyException("стороны a, c и b, d должны быть попарно равны, углы A, C и B, D должны быть попарно равны"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "Параллелограмм";
}

Rhomb::Rhomb(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != b || a != c || a != d || b != c || b != d || c != b || A != C || B != D) { throw MyException("все стороны должны быть попарно равны, углы A, C и B, D должны быть попарно равны"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "Ромб";
}