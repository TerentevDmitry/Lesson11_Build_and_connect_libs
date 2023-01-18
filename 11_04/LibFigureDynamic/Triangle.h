#pragma once
#include "Figure.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

namespace FigureLibraryDynamic
{
		class FigureLibraryDynamic_API Triangle : public Figure
	{
	public:
		Triangle(int sideLengthA, int sideLengthB, int sideLengthC,
				 int angleA, int angleB, int angleC);
	};

		class FigureLibraryDynamic_API RightTriangle : public Triangle
	{
	public:
		RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
	};

		class FigureLibraryDynamic_API IsoscelesTriangle : public Triangle
	{
	public:
		IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

		class FigureLibraryDynamic_API EquilateralTriangle :
		public Triangle
	{
	public:
		EquilateralTriangle(int sideLengthA);
	};
};