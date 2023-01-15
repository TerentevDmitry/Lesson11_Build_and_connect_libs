#pragma once
#include "Figure.h"


#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

namespace dll_11_04
{

		FigureLibraryDynamic_API  class Triangle : public Figure
	{
	public:
		Triangle(int sideLengthA, int sideLengthB, int sideLengthC,
				 int angleA, int angleB, int angleC);
	};

		FigureLibraryDynamic_API  class RightTriangle : public Triangle
	{
	public:
		RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
	};

		FigureLibraryDynamic_API  class IsoscelesTriangle : public Triangle
	{
	public:
		IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

		FigureLibraryDynamic_API  class EquilateralTriangle :
		public Triangle
	{
	public:
		EquilateralTriangle(int sideLengthA);
	};
};