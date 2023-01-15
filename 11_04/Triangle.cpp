#include "Triangle.h"
#include "Figure.h"

namespace dll_11_04
{
Triangle::Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
{
	nameOfFigure_ = "Треугольник";
	sideLengthA_ = sideLengthA;
	sideLengthB_ = sideLengthB;
	sideLengthC_ = sideLengthC;
	angleA_ = angleA;
	angleB_ = angleB;
	angleC_ = angleC;
}

RightTriangle::RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, 90)
{
	Triangle::nameOfFigure_ = "Прямоугольный треугольник";
};

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
	: Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
{
	Triangle::nameOfFigure_ = "Равнобедренный треугольник";
};

EquilateralTriangle::EquilateralTriangle(int sideLengthA)
	: Triangle(sideLengthA, sideLengthA, sideLengthA, 60, 60, 60)
{
	Triangle::nameOfFigure_ = "Равносторонний треугольник";
};
};