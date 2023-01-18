#include "Quadrilateral.h"

namespace FigureLibraryDynamic
{
	Quadrilateral::Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	{
		nameOfFigure_ = "Четырехугольник";

		haveFourSides_ = true;

		sideLengthA_ = sideLengthA;
		sideLengthB_ = sideLengthB;
		sideLengthC_ = sideLengthC;
		sideLengthD_ = sideLengthD;

		angleA_ = angleA;
		angleB_ = angleB;
		angleC_ = angleC;
		angleD_ = angleD;
	};

	Rectangle::Rectangle(int sideLengthA, int sideLengthB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Прямоугольник";
	};

	Square::Square(int sideLengthA)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Квадрат";
	};

	Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "Параллелограмм";
	};

	Rhomb::Rhomb(int sideLengthA, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "Ромб";
	}
};