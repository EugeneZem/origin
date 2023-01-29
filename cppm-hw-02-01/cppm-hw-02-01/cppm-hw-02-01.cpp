#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    enum class months
    {
        january = 1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };

    months month;
    int num;
    std::string result;

    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        month = static_cast<months>(num);

        switch (month)
        {
        case months::january:
            result = "январь";
            break;
        case months::february:
            result = "февраль";
            break;
        case months::march:
            result = "март";
            break;
        case months::april:
            result = "апрель";
            break;
        case months::may:
            result = "май";
            break;
        case months::june:
            result = "июнь";
            break;
        case months::july:
            result = "июль";
            break;
        case months::august:
            result = "август";
            break;
        case months::september:
            result = "сентябрь";
            break;
        case months::october:
            result = "октябрь";
            break;
        case months::november:
            result = "ноябрь";
            break;
        case months::december:
            result = "декабрь";
            break;
        default:
            result = "Неправильный номер!";
            break;
        }

        if (static_cast<bool>(month))
        {
            std::cout << result << std::endl;
        }
        else break;

    } while (num);

    std::cout << "До свидания" << std::endl;
}