// 11_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

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

	Leaver person1(nameOfPerson);

	std::cout << person1.leave() << std::endl;

	system("pause");
}