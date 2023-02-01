#include <iostream>
#include <string>

class Calculate
{
public:
    double num1;
    double num2;

    double add() {return num1 + num2;}

    double multiply() {return num1 * num2;}

    double substruct_1_2() {return num1 - num2;}

    double substruct_2_1() {return num2 - num1;}

    double divide_1_2() {return num1 / num2;}

    double divide_2_1() {return num2 / num1;}

    bool set_num1(double num1)
    {
        if (num1)
        {
            this->num1 = num1;
            return true;
        }
        else return false;
    }

    bool set_num2(double num2)
    {
        if (num2)
        {
            this->num2 = num2;
            return true;
        }
        else return false;
    }
};

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    float num1, num2;
    Calculate calculate;

    do
    {
        do
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (!calculate.set_num1(num1))
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!calculate.set_num1(num1));

        do
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!calculate.set_num2(num2))
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!calculate.set_num2(num2));

        std::cout << "num1 + num2 = " << calculate.add() << std::endl;
        std::cout << "num1 - num2 = " << calculate.substruct_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculate.substruct_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculate.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculate.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculate.divide_2_1() << std::endl;

    } while (true);
}