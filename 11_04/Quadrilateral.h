#pragma once
#include "Figure.h"

#ifdef DLL_11_04_EXPORTS
#define dll_1104_API __declspec(dllexport)
#else
#define dll_1104_API __declspec(dllimport)
#endif

namespace dll_11_04
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