#pragma once
#include"figure.h"

#ifndef DynamicLib_EXPORTS
#define LIB __declspec(dllexport)

#else LIB __declspec(dllimport)

#endif // DynamicLib_EXPORTS


class Quadrangle : public Figure
{
protected:
    double a, b, c, d;
    double A, B, C, D;
public:
    LIB Quadrangle();
    LIB Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info();
};

class Rectangle : public Quadrangle
{
public:
    LIB Rectangle(double a, double b);
};

class Square : public Quadrangle
{
public:
    LIB Square(double a);
};

class Parallelogram : public Quadrangle
{
public:
    LIB Parallelogram(double a, double b, double A, double B);
};

class Rhomb : public Quadrangle
{
public:
    LIB Rhomb(double a, double A, double B);
};