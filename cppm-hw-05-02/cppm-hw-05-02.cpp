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

    double get_a() 
    {
        return a;
    }

    double get_b()
    {
        return b;
    }
    
    double get_c()
    {
        return c;
    }

    double get_A()
    {
        return A;
    }
    
    double get_B()
    {
        return B;
    }

    double get_C()
    {
        return C;
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

    double get_a()
    {
        return a;
    }

    double get_b()
    {
        return b;
    }

    double get_c()
    {
        return c;
    }

    double get_d()
    {
        return d;
    }

    double get_A()
    {
        return A;
    }

    double get_B()
    {
        return B;
    }

    double get_C()
    {
        return C;
    }

    double get_D()
    {
        return D;
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

void print_info (Triangle* ptrfigure)
{
    std::cout << "Строны: a=" << ptrfigure->get_a() << " b=" << ptrfigure->get_b() << " c=" << ptrfigure->get_c() << std::endl;
    std::cout << "Углы: A=" << ptrfigure->get_A() << " B=" << ptrfigure->get_B() << " C=" << ptrfigure->get_C() << std::endl;
}

void print_info(Quadrangle* ptrfigure)
{
    std::cout << "Строны: a=" << ptrfigure->get_a() << " b=" << ptrfigure->get_b() << " c=" << ptrfigure->get_c() << " d=" << ptrfigure->get_d() << std::endl;
    std::cout << "Углы: A=" << ptrfigure->get_A() << " B=" << ptrfigure->get_B() << " C=" << ptrfigure->get_C() << " D=" << ptrfigure->get_D() << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
    
    std::cout << "Треугольник: " << std::endl;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);
        
    std::cout << std::endl << "Прямоугольный треугольник: " << std::endl;
    TriangleRight triangleRight(10, 20, 30, 50, 60);
    print_info(&triangleRight);

    std::cout << std::endl << "Равнобедренный треугольник: " << std::endl;
    TriangleIsosceles triangleIsosceles(10, 20, 50, 60);
    print_info(&triangleIsosceles);

    std::cout << std::endl << "Равносторонний треугольник: " << std::endl;
    TriangleEquilateral triangleEquilateral(10);
    print_info(&triangleEquilateral);

    std::cout << std::endl << "Четырехугольник: " << std::endl;
    Quadrangle quadrangle(10, 30, 30, 40, 50, 60, 70, 80);
    print_info(&quadrangle);

    std::cout << std::endl << "Прямоугольник: " << std::endl;
    Rectangle rectangle(10, 20);
    print_info(&rectangle);

    std::cout << std::endl << "Квадрат: " << std::endl;
    Square square(20);
    print_info(&square);

    std::cout << std::endl << "Параллелограмм: " << std::endl;
    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(&parallelogram);

    std::cout << std::endl << "Ромб: " << std::endl;
    Rhomb rhomb(30, 30, 40);
    print_info(&rhomb);
}
