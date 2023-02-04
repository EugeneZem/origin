#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Base
{
public:
	class Adress
	{
	public:
		std::string city;
		std::string street;
		int house;
		int flat;

		Adress(std::string city, std::string street, int house, int flat)
		{
			this->city = city;
			this->street = street;
			this->house = house;
			this->flat = flat;
		}

		Adress() {}

		std::string adressInLine()
		{
			return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
		}
	};
		
	int quantityAdress;
	std::vector <Adress> adresses;

	bool readF(std::string fName)
	{
		std::ifstream file(fName);
		std::string city;
		std::string street;
		int house;
		int flat;

		if (!file.is_open()) {
			std::cout << "Текстовый файл не найден" << std::endl;
			return false;
		}

		file >> quantityAdress;
		adresses.reserve(quantityAdress);

		for (int i = 0; i < quantityAdress; ++i)
		{
			file >> city;
			file >> street;
			file >> house;
			file >> flat;

			adresses.push_back(Adress(city, street, house, flat));
		}

		file.close();
		return true;
	};

	void saveF(std::string fName)
	{
		std::ofstream file(fName);
		file << quantityAdress << std::endl;
		for (int i = 0; i < quantityAdress; i++)
		{
			file << adresses[i].adressInLine() << std::endl;
		}
		file.close();
	};
};

int main()
{
	setlocale(LC_ALL, "ru-RU");
	system("chcp 1251");
	
	Base base;

	if (!base.readF("in.txt"))
	{
		std::cout << "Исходный файл не прочитан";
		return 1;
	} 
	else
	{
		base.saveF("out.txt");
		std::cout << "Успешное выполнение программы";
		return 0;
	}
}