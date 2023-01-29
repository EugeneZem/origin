#include <iostream>
#include <string>

struct bankAccount
{
    int number;
    std::string clientName;
    float total;
};

void totalChange(bankAccount item)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> item.total;
    std::cout << "Ваш счет: " << item.clientName << ", " << item.number << ", " << item.total;
}

int main()
{
   setlocale(LC_ALL, "ru-RU");
   system("chcp 1251");

    bankAccount newAccount;

    std::cout << "Введите номер счета: ";
    std::cin >> newAccount.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> newAccount.clientName;
    std::cout << "Введите баланс: ";
    std::cin >> newAccount.total;

    totalChange(newAccount);
}
