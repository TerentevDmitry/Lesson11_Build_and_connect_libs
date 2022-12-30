// 11_01.cpp : Статическая библиотека.

#include <iostream>
#include "../11_01_StaticLib/Greeter.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;

	std::cout << Greeter(name) << std::endl;

	system("pause");
}