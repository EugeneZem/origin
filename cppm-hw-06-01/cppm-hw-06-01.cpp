#include <iostream>
#include "calc.h"

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
    
    double var1, var2;
    int id;

    std::cout << "Введите первое чило: ";
    std::cin >> var1;
    std::cout << "Введите второе чило: ";
    std::cin >> var2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> id;

    switch (id)
    {
        case 1:
            std::cout << var1 << " + " << var2 << " = " << addition(var1, var2);
            break;
        case 2:
            std::cout << var1 << " - " << var2 << " = " << subtraction(var1, var2);
            break;
        case 3:
            std::cout << var1 << " * " << var2 << " = " << multiplication(var1, var2);
            break;
        case 4:
            std::cout << var1 << " / " << var2 << " = " << division(var1, var2);
            break;
        case 5:
            std::cout << var1 << " в степени 2  = " << secondDegree(var1);
            break;
    }
}

