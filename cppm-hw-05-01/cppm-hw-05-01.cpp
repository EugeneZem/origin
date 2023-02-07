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
public:
    Triangle()
    {
        sideCounter = 3;
    }
};

class Rectangle : public Figure
{
public:
    Rectangle()
    {
        sideCounter = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
        
    std::cout << "Количество сторон:" << std::endl;
    Figure figure;
    std::cout << "Фигура: " << figure.getSide() << std::endl;
    Triangle triangle;
    std::cout << "Треугольник: " << triangle.getSide() << std::endl;
    Rectangle rectangle;
    std::cout << "Четырехугольник: " << rectangle.getSide() << std::endl;
 }
