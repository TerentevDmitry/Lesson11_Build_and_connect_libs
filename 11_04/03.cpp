//11_04. Задача 3. Задача 4*. Иерархия классов в DLL, проекты VC++

#include <iostream>
#include <string>
#include "LibFigureDynamic/Figure.h"
#include "LibFigureDynamic/Triangle.h"
#include "LibFigureDynamic/Quadrilateral.h"
#include "PrintFigures.h"


int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	
	FigureLibraryDynamic::Triangle Triangle1(10, 20, 30, 40, 50, 60);
	FigureLibraryDynamic::printFigures(&Triangle1);

	FigureLibraryDynamic::RightTriangle rightTriangle1(10, 20, 30, 40, 50);
	FigureLibraryDynamic::printFigures(&rightTriangle1);

	FigureLibraryDynamic::IsoscelesTriangle isoscelesTriangle1(11, 220, 330, 440);
	FigureLibraryDynamic::printFigures(&isoscelesTriangle1);

	FigureLibraryDynamic::EquilateralTriangle equilateralTriangle1(111);
	FigureLibraryDynamic::printFigures(&equilateralTriangle1);

	FigureLibraryDynamic::Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	FigureLibraryDynamic::printFigures(&Quadrilateral1);

	FigureLibraryDynamic::Rectangle Rectangle1(14, 24);
	FigureLibraryDynamic::printFigures(&Rectangle1);

	FigureLibraryDynamic::Square Square1(333);
	FigureLibraryDynamic::printFigures(&Square1);

	FigureLibraryDynamic::Parallelogram Parallelogram1(555, 666, 777, 888);
	FigureLibraryDynamic::printFigures(&Parallelogram1);

	FigureLibraryDynamic::Rhomb Rhomb1(14, 24, 34);
	FigureLibraryDynamic::printFigures(&Rhomb1);
}