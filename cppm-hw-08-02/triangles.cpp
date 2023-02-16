#include <iostream>
#include "triangles.h"
#include "figure.h"
#include "exceptions.h"

Triangle::Triangle() {};

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    if ((A + B + C) != 180) { throw MyException("����� ����� �� ����� 180"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "�����������";
    
}

void Triangle::print_info ()
{
    std::cout << name;
    std::cout << "(c�����: " << a << ", " << b << "," << c;
    std::cout << "; ����: " << A << ", " << B << ", " << C << ") ������" << std::endl;
}

TriangleRight::TriangleRight(double a, double b, double c, double A, double B, double C)
{
    if (C != 90) { throw MyException("���� � �� ����� 90"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "���������� �����������";
}

TriangleIsosceles::TriangleIsosceles(double a, double b, double c, double A, double B, double C)
{
    if (a != c || A != C) { throw MyException("������� a � c, � ��� �� ���� A � C ������ ���� �����"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->name = "�������������� �����������";
}

TriangleEquilateral::TriangleEquilateral(double a, double b, double c, double A, double B, double C)
{
    if ((a != b) || (a != c) || (b != c) || (A != 60) || (B != 60) || (C != 60)) { throw MyException("��� ������� ���� �����, ��� ���� ������ ���� ����� 60"); }

    sideCounter = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "�������������� �����������";
}