// 11_01.cpp : ����������� ����������.

#include <iostream>
#include "../Greeter.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ����������� ���������
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "������� ���: ";
	std::cin >> nameOfPerson;

	Greeter person1(nameOfPerson);

	std::cout << person1.greet() << std::endl;
}