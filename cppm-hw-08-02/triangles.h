#pragma once
#include"figure.h"

class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
    std::string name;
public:
    Triangle();
    Triangle(double a, double b, double c, double A, double B, double C);
    void print_info();
};

class TriangleRight :public Triangle
{
public:
    TriangleRight(double a, double b, double c, double A, double B, double C);
};

class TriangleIsosceles :public Triangle
{
public:
    TriangleIsosceles(double a, double b, double c, double A, double B, double C);
};

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(double a, double b, double c, double A, double B, double C);
};