#include <iostream>
#include "quadrangles.h"
#include "figure.h"
#include "exceptions.h"

Quadrangle::Quadrangle() {}

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if ((A + B + C + D) != 360) { throw MyException("����� ����� �� ����� 360"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "���������������";
}

void Quadrangle::print_info()
{
    std::cout << name;
    std::cout << "(c�����: " << a << ", " << b << ", " << c << ", " << d;
    std::cout << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;
}

Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a!=c || b!=d || A != 90 ||  B != 90 || C != 90 || D != 90 ) { throw MyException("������� a, c � b, d ������ ���� ������� �����, ��� ���� ������ ���� ����� 90"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "�������������";
}

Square::Square(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != b || a != c || a != d || b != c || b != d || c != b || A != 90 || B != 90 || C != 90 || D != 90) { throw MyException("��� ������� ������ ���� �����, ��� ���� ������ ���� ����� 90"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "�������";
}

Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != c || b != d  || A != C || B != D) { throw MyException("������� a, c � b, d ������ ���� ������� �����, ���� A, C � B, D ������ ���� ������� �����"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "��������������";
}

Rhomb::Rhomb(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if (a != b || a != c || a != d || b != c || b != d || c != b || A != C || B != D) { throw MyException("��� ������� ������ ���� ������� �����, ���� A, C � B, D ������ ���� ������� �����"); }
    
    sideCounter = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = "����";
}