#pragma once
#include "Figure.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

namespace dll_11_04
{

	FigureLibraryDynamic_API class Quadrilateral : public Figure
	{
	public:
		Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD,
					  int angleA, int angleB, int angleC, int angleD);
	};

	FigureLibraryDynamic_API class Rectangle : public Quadrilateral
	{
	public:
		Rectangle(int sideLengthA, int sideLengthB);
	};

	FigureLibraryDynamic_API class Square : public Quadrilateral
	{
	public:
		Square(int sideLengthA);
	};

	FigureLibraryDynamic_API class Parallelogram : public Quadrilateral
	{
	public:
		Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

	FigureLibraryDynamic_API class Rhomb : public Quadrilateral
	{
	public:
		Rhomb(int sideLengthA, int angleA, int angleB);
	};
};