#include <iostream>

int function(std::string str, int forbidden_length)
{
   
    
    if (str.length() != forbidden_length)
    {
        return str.length();
    }
    else
    {
        throw std::exception("bad_length");
    }
}

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    std::string let;
    int len;
    bool exit = false;

    std::cout << "Введите запретную длину: ";
    std::cin >> len;

    do
    {
        std::cout << "Введите слово: ";
        std::cin >> let;

        try
        {
            std::cout << "Длина слова \"" << let << "\" равна " << function(let, len) << std::endl;
        }
        catch (const std::exception& err)
        {
            if ((std::string)err.what() == "bad_length")
            {
                std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
                exit = true;
            }
        }
    }
    while (!exit);
}