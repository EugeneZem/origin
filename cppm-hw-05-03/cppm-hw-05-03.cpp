#include <iostream>
#include <string>

class Figure
{
protected:
    int sideCounter;
    std::string name;
public:
    Figure()
    {
        sideCounter = 0;
        name = "Фигура";
    }

    int getSide()
    {
        return sideCounter;
    }

    virtual void info()
    {
        std::cout << "Количество сторон: " << getSide() << std::endl;
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
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        this->name = "Треугольник";
        this->sideCounter = 3;
    }

    void info() override
    {
        std::cout << name << ":" << std::endl;
        std::cout << (verify() ? "Правильная" : "Неправильная") << std::endl;
        Figure::info();
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
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
    TriangleRight(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С)
    {
        this->name = "Прямоугольный треугольник";
    }

    bool verify() override
    {
        if (C != 90) { return false; }
        Triangle::verify();
    }
};

class TriangleIsosceles :public Triangle
{
public:
    TriangleIsosceles(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С)
    {
        this->name = "Равнобедренный треугольник";
    }

    bool verify() override
    {
        if ((a != c) || (A != C)) { return false; }
        Triangle::verify();
    }
};

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(double a, double b, double c, double A, double B, double С) : Triangle(a, b, c, A, B, С)
    {
        this->name = "Равносторонний треугольник";
    }

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
        this->name = "Четырехугольник";
        this->sideCounter = 4;
    }

    void info() override
    {
        std::cout << name << ":" << std::endl;
        std::cout << (verify() ? "Правильная" : "Неправильная") << std::endl;
        Figure::info();
        std::cout << "Строны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
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
    Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        this->name = "Прямоугольник";
    }

    bool verify() override
    {
        if ((a != c) || (b != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) { return false; }
        Quadrangle::verify();
    }
};

class Square : public Quadrangle
{
public:
    Square(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        this->name = "Квадрат";
    }

    bool verify() override
    {
        if ((a != b) || (a != c) || (a != d) || (b != c) || (b != d) || (c != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) { return false; }
        Quadrangle::verify();
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        this->name = "Параллелограмм";
    }

    bool verify() override
    {
        if ((a != c) || (b != d) || (A != C) || (B != D)) { return false; }
        Quadrangle::verify();
    }
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        this->name = "Ромб";
    }

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

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Figure* ptrTriangle = &triangle;
    ptrTriangle->info();
    
    TriangleRight triangleRight(10, 20, 30, 50, 60, 90);
    Figure* ptrTriangleRight = &triangleRight;
    ptrTriangleRight->info();

    TriangleRight triangleRight1(10, 20, 30, 50, 40, 90);
    Figure* ptrTriangleRight1 = &triangleRight1;
    ptrTriangleRight1->info();

    TriangleIsosceles triangleIsosceles(10, 20, 10, 50, 60, 50);
    Figure* ptrTriangleIsosceles = &triangleIsosceles;
    ptrTriangleIsosceles->info();

    TriangleEquilateral triangleEquilateral(30, 30, 30, 60, 60, 60);
    Figure* ptrTriangleEquilateral = &triangleEquilateral;
    ptrTriangleEquilateral->info();

    Quadrangle quadrangle(10, 30, 30, 40, 50, 60, 70, 80);
    Figure* ptrQuadrangle = &quadrangle;
    ptrQuadrangle->info();

    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    Figure* ptrRrectangle = &rectangle;
    ptrRrectangle->info();

    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    Figure* ptrSquare = &square;
    ptrSquare->info();

    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    Figure* ptrParallelogram = &parallelogram;
    ptrParallelogram->info();

    Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    Figure* ptrRhomb = &rhomb;
    ptrRhomb->info();
}
