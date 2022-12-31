// 11_01.cpp : Статическая библиотека.

#include <iostream>
#include "Greeter.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Greeter oiter(nameOfPerson);
		
	std::cout << oiter.getGreetingPerson() << std::endl;
}