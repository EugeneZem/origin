#include <iostream>
#include <string>
#include "library/figure.h"
#include "library/triangles.h"
#include "library/quadrangles.h"

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