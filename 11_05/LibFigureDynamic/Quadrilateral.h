#pragma once
#include "Figure.h"

namespace FigureLibraryDynamic
{

	class Quadrilateral : public Figure
	{
	public:
		Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD,
					  int angleA, int angleB, int angleC, int angleD);
	};

	class Rectangle : public Quadrilateral
	{
	public:
		Rectangle(int sideLengthA, int sideLengthB);
	};

	class Square : public Quadrilateral
	{
	public:
		Square(int sideLengthA);
	};

	class Parallelogram : public Quadrilateral
	{
	public:
		Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

	class Rhomb : public Quadrilateral
	{
	public:
		Rhomb(int sideLengthA, int angleA, int angleB);
	};
};