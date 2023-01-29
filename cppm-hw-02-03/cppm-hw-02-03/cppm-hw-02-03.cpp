#include <iostream>
#include <string>

struct adress
{
    std::string city;
    std::string street;
    int house;
    int flat;
    int index;

};

void print(adress item)
{
    std::cout << "Город: " << item.city << std::endl;
    std::cout << "Улица: " << item.street << std::endl;
    std::cout << "Номер дома: " << item.house << std::endl;
    std::cout << "Номер квартиры: " << item.flat << std::endl;
    std::cout << "Индекс: " << item.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    adress testAdress
    {
        "Москва",
        "Севастопольская",
        18,
        126,
        123654
    };
    
    adress newAdress
    {
        "Севастополь",
        "Московская",
        48,
        987,
        987645
    };

    print(testAdress);
    std::cout << std::endl;
    print(newAdress);
}
