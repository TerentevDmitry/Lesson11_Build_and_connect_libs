// 11_01.cpp : Статическая библиотека.

#include <iostream>
#include "Greeter.h"
#include "11_01.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string NameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> NameOfPerson;

	Greeter oiter(NameOfPerson);
		
	std::cout << oiter.getGreetingAPerson() << std::endl;
}