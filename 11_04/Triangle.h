#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC,
			 int angleA, int angleB, int angleC);
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB);
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB);
};

class EquilateralTriangle :
	public Triangle
{
public:
	EquilateralTriangle(int sideLengthA);
};

