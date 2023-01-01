// 11_01.cpp : Статическая библиотека.

#include <iostream>
#include "../11_01_staticLib/Greeter.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Greeter person1(nameOfPerson);

	std::cout << person1.greet() << std::endl;
}