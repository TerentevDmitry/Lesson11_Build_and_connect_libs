#pragma once
#include "Figure.h"

#ifdef dll_11_04_EXPORTS
#define dll_11_04_API __declspec(dllexport)
#else
#define dll_11_04_API __declspec(dllimport)
#endif

namespace dll_11_04
{

	dll_11_04_API class Triangle : public Figure
	{
	public:
		Triangle(int sideLengthA, int sideLengthB, int sideLengthC,
			int angleA, int angleB, int angleC);
	};

	dll_11_04_API class RightTriangle : public Triangle
	{
	public:
		RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
	};

	dll_11_04_API class IsoscelesTriangle : public Triangle
	{
	public:
		IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
	};

	dll_11_04_API class EquilateralTriangle :
		public Triangle
	{
	public:
		EquilateralTriangle(int sideLengthA);
	};
};