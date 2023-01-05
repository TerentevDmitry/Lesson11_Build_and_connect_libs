// 11_02.cpp: Задача 3. Динамическая библиотека CMake

#include <iostream>
#include "Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Leaver person1;

	std::cout << person1.leave(nameOfPerson) << std::endl;

	//system("pause");
}