#pragma once
#include"figure.h"

class Quadrangle : public Figure
{
protected:
    double a, b, c, d;
    double A, B, C, D;
public:
    Quadrangle();
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info();
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(double a, double b);
};

class Square : public Quadrangle
{
public:
    Square(double a);
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double A, double B);
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(double a, double A, double B);
};