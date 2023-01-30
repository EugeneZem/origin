#include <iostream>
#include <string>

struct bankAccount
{
    int number;
    std::string clientName;
    float total;
};

void totalChange(bankAccount *item)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> (*item).total;
    std::cout << "Ваш счет: " << (*item).clientName << ", " << (*item).number << ", " << (*item).total;
}

int main()
{
   setlocale(LC_ALL, "ru-RU");
   system("chcp 1251");

    bankAccount newAccount;
    bankAccount *p_newAccount = &newAccount;    // объявление указателя

    std::cout << "Введите номер счета: ";
    std::cin >> (*p_newAccount).number;         // обращение через указатель
    std::cout << "Введите имя владельца: ";
    std::cin >> p_newAccount->clientName;       // второй вариант обращения через указатель
    std::cout << "Введите баланс: ";
    std::cin >> newAccount.total;               



    totalChange(p_newAccount);
}
