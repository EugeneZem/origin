#define MODE 1
#include <iostream>

#if MODE == 1
int add(int var1, int var2) { return var1 + var2; }
#endif

int main()
{
	setlocale(LC_ALL, "ru-RU");
	system("chcp 1251");
#if MODE == 0
	std::cout << "Работаю в тренировочном режиме";
#elif MODE == 1
	int var1, var2;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> var1;
	std::cout << "Введите число 2: ";
	std::cin >> var2;
	std::cout << "Результат сложения: " << add(var1, var2) << std::endl;
#else 
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif
}