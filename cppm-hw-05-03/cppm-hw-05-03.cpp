#include <iostream>
#include <string>

class Figure
{
protected:
    int sideCounter;

public:
    Figure()
    {
        sideCounter = 0;
    }

    int getSide()
    {
        return sideCounter;
    }

    virtual void info()
    {
        std::cout << "Количество сторон: " << sideCounter << std::endl;
    }
};

class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
public:
    Triangle() {};

    Triangle(double a, double b, double c, double A, double B, double C)
    {
        sideCounter = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }

    void info() override
    {
        Figure::info();
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }

    virtual bool verify()
    {
        if ((A + B + C) != 180) { return false; }
        return true;
    }
};

class TriangleRight :public Triangle
{
public:
    TriangleRight(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С){}

    bool verify() override
    {
        if (C != 90) { return false; }
        Triangle::verify();
    }
};

class TriangleIsosceles :public Triangle
{
public:
    TriangleIsosceles(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С) {}

    bool verify() override
    {
        if ((a != c) || (A != C)) { return false; }
        Triangle::verify();
    }
};

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С) {}

    bool verify() override
    {
        if ((a != b) || (a != c) || (b != c) || (A != B) || (A != C) || (B != C)) { return false; }
        Triangle::verify();
    }
};


class Quadrangle : public Figure
{
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrangle() {};

    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
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

    void info() override
    {
        Figure::info();
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }

    virtual bool verify()
    {
        if ((A + B + C + D) != 360) { return false; }
        return true;
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D) {}

    bool verify() override
    {
        if ((a != c) || (b != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) { return false; }
        Quadrangle::verify();
    }
};

class Square : public Quadrangle
{
public:
    Square(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D) {}

    bool verify() override
    {
        if ((a != b) || (a != c) || (a != d) || (b != c) || (b != d) || (c != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) { return false; }
        Quadrangle::verify();
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D) {}

    bool verify() override
    {
        if ((a != c) || (b != d) || (A != C) || (B != D)) { return false; }
        Quadrangle::verify();
    }
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D) {}

    bool verify() override
    {
        if ((a != b) || (a != c) || (a != d) || (b != c) || (b != d) || (c != d) || (A != C) || (B != D)) { return false; }
        Quadrangle::verify();
    }
};


int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    std::cout << "Треугольник: " << std::endl;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    std::cout << (triangle.verify() ? "Правильная" : "Неправильная") << std::endl;
    triangle.info();

    std::cout << std::endl << "Прямоугольный треугольник: " << std::endl;
    TriangleRight triangleRight(10, 20, 30, 50, 60, 90);
    std::cout << (triangleRight.verify() ? "Правильная" : "Неправильная") << std::endl;
    triangleRight.info();

    std::cout << std::endl << "Прямоугольный треугольник: " << std::endl;
    TriangleRight triangleRight1(10, 20, 30, 50, 40, 90);
    std::cout << (triangleRight1.verify() ? "Правильная" : "Неправильная") << std::endl;
    triangleRight1.info();

    std::cout << std::endl << "Равнобедренный треугольник: " << std::endl;
    TriangleIsosceles triangleIsosceles(10, 20, 10, 50, 60, 50);
    std::cout << (triangleIsosceles.verify() ? "Правильная" : "Неправильная") << std::endl;
    triangleIsosceles.info();

    std::cout << std::endl << "Равносторонний треугольник: " << std::endl;
    TriangleEquilateral triangleEquilateral(30, 30, 30, 60, 60, 60);
    std::cout << (triangleEquilateral.verify() ? "Правильная" : "Неправильная") << std::endl;
    triangleEquilateral.info();

    std::cout << std::endl << "Четырехугольник: " << std::endl;
    Quadrangle quadrangle(10, 30, 30, 40, 50, 60, 70, 80);
    std::cout << (quadrangle.verify() ? "Правильная" : "Неправильная") << std::endl;
    quadrangle.info();

    std::cout << std::endl << "Прямоугольник: " << std::endl;
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    std::cout << (rectangle.verify() ? "Правильная" : "Неправильная") << std::endl;
    rectangle.info();
 
    std::cout << std::endl << "Квадрат: " << std::endl;
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    std::cout << (square.verify() ? "Правильная" : "Неправильная") << std::endl;
    square.info();

    std::cout << std::endl << "Параллелограмм: " << std::endl;
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    std::cout << (parallelogram.verify() ? "Правильная" : "Неправильная") << std::endl;
    parallelogram.info();

    std::cout << std::endl << "Ромб: " << std::endl;
    Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    std::cout << (parallelogram.verify() ? "Правильная" : "Неправильная") << std::endl;
    parallelogram.info();
}
