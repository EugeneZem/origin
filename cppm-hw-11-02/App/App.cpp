#include<iostream>
#include"leaver.h"

int main()
{
	setlocale(LC_ALL, "ru-RU");
	system("chcp 1251");

	std::string name;
	lv::leaver leave;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << leave.leave(name);
}