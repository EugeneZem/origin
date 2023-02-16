#include <iostream>
#include <string>
#include "figure.h"
#include "triangles.h"
#include "quadrangles.h"
#include "exceptions.h"




int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 90);
        Figure* ptrTriangle = &triangle;
        ptrTriangle->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
    
    try
    {
        TriangleRight triangleRight(10, 20, 30, 30, 90, 60);
        Figure* ptrTriangleRight = &triangleRight;
        ptrTriangleRight->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
 
    try
    {
        TriangleIsosceles triangleIsosceles(10, 20, 30, 30, 90, 60);
        Figure* ptrTriangleIsosceles = &triangleIsosceles;
        ptrTriangleIsosceles->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        TriangleEquilateral triangleEquilateral(10, 10, 10, 60, 60, 60);
        Figure* ptrTriangleEquilateral = &triangleEquilateral;
        ptrTriangleEquilateral->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        Quadrangle quadrangle(10, 30, 30, 40, 50, 60, 70, 80);
        Figure* ptrQuadrangle = &quadrangle;
        ptrQuadrangle->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        Rectangle rectangle(10, 30, 30, 40, 50, 60, 70, 80);
        Figure* ptrRectangle = &rectangle;
        ptrRectangle->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        Square square(10, 30, 30, 40, 50, 60, 70, 80);
        Figure* ptrSquare = &square;
        ptrSquare->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        Parallelogram parallelogram(10, 30, 10, 30, 50, 60, 50, 60);
        Figure* ptrParallelogram = &parallelogram;
        ptrParallelogram->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }

    try
    {
        Rhomb rhomb(10, 10, 10, 10, 50, 60, 50, 60);
        Figure* ptrRhomb = &rhomb;
        ptrRhomb->print_info();
    }
    catch (MyException& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
}