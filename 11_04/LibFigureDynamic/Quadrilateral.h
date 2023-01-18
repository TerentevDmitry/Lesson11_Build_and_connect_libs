#pragma once
#include "Figure.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

namespace FigureLibraryDynamic
{

	class FigureLibraryDynamic_API Quadrilateral : public Figure
	{
	public:
		Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD,
					  int angleA, int angleB, int angleC, int angleD);
	};

	class FigureLibraryDynamic_API Rectangle : public Quadrilateral
	{
	public:
		Rectangle(int sideLengthA, int sideLengthB);
	};

	class FigureLibraryDynamic_API Square : public Quadrilateral
	{
	public:
		Square(int sideLengthA);
	};

	class FigureLibraryDynamic_API Parallelogram : public Quadrilateral
	{
	public:
		Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

	class FigureLibraryDynamic_API Rhomb : public Quadrilateral
	{
	public:
		Rhomb(int sideLengthA, int angleA, int angleB);
	};
};