#pragma once
#include"figure.h"

#ifndef DynamicLib_EXPORTS
#define LIB __declspec(dllexport)

#else LIB __declspec(dllimport)

#endif // DynamicLib_EXPORTS


class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
public:
    LIB Triangle();
    LIB Triangle(double a, double b, double c, double A, double B, double C);
    LIB void print_info();
};

class TriangleRight :public Triangle
{
public:
    LIB TriangleRight(double a, double b, double c, double A, double B);
};

class TriangleIsosceles :public Triangle
{
public:
    LIB TriangleIsosceles(double a, double b, double A, double B);
};

class TriangleEquilateral : public Triangle
{
public:
    LIB TriangleEquilateral(double a);
};