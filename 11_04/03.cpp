//11_04. Задача 3. Задача 4*. Иерархия классов в DLL, проекты VC++

#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "PrintFigure.h"


int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	
	Triangle Triangle1(10, 20, 30, 40, 50, 60);
	printFigure(&Triangle1);

	RightTriangle rightTriangle1(10, 20, 30, 40, 50);
	printFigure(&rightTriangle1);

	IsoscelesTriangle isoscelesTriangle1(11, 220, 330, 440);
	printFigure(&isoscelesTriangle1);

	EquilateralTriangle equilateralTriangle1(111);
	printFigure(&equilateralTriangle1);

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	printFigure(&Quadrilateral1);

	Rectangle Rectangle1(14, 24);
	printFigure(&Rectangle1);

	Square Square1(333);
	printFigure(&Square1);

	Parallelogram Parallelogram1(555, 666, 777, 888);
	printFigure(&Parallelogram1);

	Rhomb Rhomb1(14, 24, 34);
	printFigure(&Rhomb1);
}