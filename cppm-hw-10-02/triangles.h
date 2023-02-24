#pragma once
#include"figure.h"

class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
public:
    Triangle();
    Triangle(double a, double b, double c, double A, double B, double C);
    void print_info();
};

class TriangleRight :public Triangle
{
public:
    TriangleRight(double a, double b, double c, double A, double B);
};

class TriangleIsosceles :public Triangle
{
public:
    TriangleIsosceles(double a, double b, double A, double B);
};

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(double a);
};