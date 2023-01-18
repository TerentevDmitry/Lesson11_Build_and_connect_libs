//11_04. Задача 3. Задача 4*. Иерархия классов в DLL, проекты VC++

#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "PrintFigure.h"

//using namespace dll_11_04;

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	
	dll_11_04::Triangle Triangle1(10, 20, 30, 40, 50, 60);
	dll_11_04::printFigure(&Triangle1);

	dll_11_04::RightTriangle rightTriangle1(10, 20, 30, 40, 50);
	printFigure(&rightTriangle1);

	dll_11_04::IsoscelesTriangle isoscelesTriangle1(11, 220, 330, 440);
	printFigure(&isoscelesTriangle1);

	dll_11_04::EquilateralTriangle equilateralTriangle1(111);
	printFigure(&equilateralTriangle1);

	dll_11_04::Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	printFigure(&Quadrilateral1);

	dll_11_04::Rectangle Rectangle1(14, 24);
	printFigure(&Rectangle1);

	dll_11_04::Square Square1(333);
	printFigure(&Square1);

	dll_11_04::Parallelogram Parallelogram1(555, 666, 777, 888);
	printFigure(&Parallelogram1);

	dll_11_04::Rhomb Rhomb1(14, 24, 34);
	printFigure(&Rhomb1);
}