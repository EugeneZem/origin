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

    std::string getName() 
    {
        return name;
    }

};

class Triangle : public Figure
{
public:
    Triangle()
    {
        sideCounter = 3;
        name = "Треугольник";
    }
};

class Rectangle : public Figure
{
public:
    Rectangle()
    {
        sideCounter = 4;
        name = "Четырехугольник";
    }
};

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
        
    std::cout << "Количество сторон:" << std::endl;
    Figure figure;
    std::cout << figure.getName() << ": " << figure.getSide() << std::endl;
    Triangle triangle;
    std::cout << triangle.getName() << ": " << triangle.getSide() << std::endl;
    Rectangle rectangle;
    std::cout << rectangle.getName() << ": " << rectangle.getSide() << std::endl;
 }
