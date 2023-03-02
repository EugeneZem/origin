#include <iostream>
#include "greeter.h"

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
    
    std::string name;
    Greeter operation;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << operation.greet(name) << std::endl;
}