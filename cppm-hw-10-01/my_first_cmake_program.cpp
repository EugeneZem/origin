#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Здравствуйте, " << name << std::endl;

    return 0;
}

