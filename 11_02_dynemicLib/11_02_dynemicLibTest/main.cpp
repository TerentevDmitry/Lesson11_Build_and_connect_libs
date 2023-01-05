// 11_02.cpp : Динамическая библиотека

#include <iostream>
#include "../Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Leaver::Leaver person1(nameOfPerson);

	std::cout << person1.leave() << std::endl;
}