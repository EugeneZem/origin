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

    virtual void print_info(){}
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

    void print_info() 
    {
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class TriangleRight :public Triangle
{
public:
    TriangleRight(double a, double b, double c, double A, double B)
    {
        sideCounter = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = 90;
    }
};

class TriangleIsosceles :public Triangle
{
public:
    TriangleIsosceles(double a, double b, double A, double B)
    {
        sideCounter = 3;
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
    }
};

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(double a)
    {
        sideCounter = 3;
        this->a = a;
        this->b = a;
        this->c = a;
        this->A = 60;
        this->B = 60;
        this->C = 60;
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

    void print_info()
    {
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(double a, double b)
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
};

class Square : public Quadrangle
{
public:
    Square(double a)
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
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double A, double B)
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
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(double a, double A, double B)
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
};

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
    
    std::cout << "Треугольник: " << std::endl;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Figure* ptrTriangle = &triangle;
    ptrTriangle->print_info();

    std::cout << std::endl << "Прямоугольный треугольник: " << std::endl;
    TriangleRight triangleRight(10, 20, 30, 50, 60);
    Figure* ptrTriangleRight = &triangleRight;
    ptrTriangleRight->print_info();

    std::cout << std::endl << "Равнобедренный треугольник: " << std::endl;
    TriangleIsosceles triangleIsosceles(10, 20, 50, 60);
    Figure* ptrTriangleIsosceles = &triangleIsosceles;
    ptrTriangleIsosceles->print_info();

    std::cout << std::endl << "Равносторонний треугольник: " << std::endl;
    TriangleEquilateral triangleEquilateral(10);
    Figure* ptrTriangleEquilateral = &triangleEquilateral;
    ptrTriangleEquilateral->print_info();

    std::cout << std::endl << "Четырехугольник: " << std::endl;
    Quadrangle quadrangle(10, 30, 30, 40, 50, 60, 70, 80);
    Figure* ptrQuadrangle = &quadrangle;
    ptrQuadrangle->print_info();

    std::cout << std::endl << "Прямоугольник: " << std::endl;
    Rectangle rectangle(10, 20);
    Figure* ptrRectangle = &rectangle;
    ptrRectangle->print_info();

    std::cout << std::endl << "Квадрат: " << std::endl;
    Square square(20);
    Figure* ptrSquare = &square;
    ptrSquare->print_info();

    std::cout << std::endl << "Параллелограмм: " << std::endl;
    Parallelogram parallelogram(20, 30, 30, 40);
    Figure* ptrParallelogram = &parallelogram;
    ptrParallelogram->print_info();

    std::cout << std::endl << "Ромб: " << std::endl;
    Rhomb rhomb(30, 30, 40);
    Figure* ptrRhomb = &rhomb;
    ptrRhomb->print_info();
}
