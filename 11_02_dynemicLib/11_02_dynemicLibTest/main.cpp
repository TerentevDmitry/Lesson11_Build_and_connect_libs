// 11_02.cpp : ������������ ����������

#include <iostream>
#include "../Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ����������� ���������
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "������� ���: ";
	std::cin >> nameOfPerson;

	Leaver::Leaver person1(nameOfPerson);

	std::cout << person1.leave() << std::endl;
}