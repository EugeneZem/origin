#include <iostream>
#include <string>

class Counter
{
    public:
        Counter(int counter = 1) { this->counter = counter; }
    
 //       Counter() { counter = 1; }
    
        void increment() { ++counter; }
    
        void decrement() { --counter; }

        int getItem() { return counter; }
    
    private:
        int counter;
};

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");
    

    Counter *p_Counter = nullptr;

    std::string firstItemId;
    int firstItem;

    std::cout << "Вы хотите указать начальное значение счетчика? Ведите да или нет: ";
    std::cin >> firstItemId;

    if (firstItemId == "да")
    {
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> firstItem;
        p_Counter = new Counter(firstItem);

    }
    else
    {
        p_Counter = new Counter;
    }

    char operation;

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::cin >> operation;
        if (operation == '+') { p_Counter->increment(); }
        if (operation == '-') { p_Counter->decrement(); }
        if (operation == '=')
        {
            std::cout << p_Counter->getItem() << std::endl;
        }
    } while (operation != 'х');

    delete p_Counter;

    std::cout << "До свидания";

}