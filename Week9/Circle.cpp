#include "stdafx.h"
#include "Circle.h"


Circle::Circle()
{
	radius = 0.0;
}

Circle::Circle(double radiusValue)
{
	radius = radiusValue;
}

Circle::~Circle()
{
}

void Circle::setRadius(double size) {
	radius = size;
	return;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	return PI * radius * radius;
}

double Circle::getDiameter() const {
	return radius * 2;
}

double Circle::getCircumference() const {
	return 2 * PI * radius;
}

/*
Write a Circle class that has the following member variables:

radius: a double
pi: a double initialized with the value of 3.14159
The class shall have the following member functions:

Default Constructor: a default constructor which sets radius to 0.0
Constructor: accepts the radius of the circle as an argument
setRadius: a mutator function for the radius variable
getRadius: an accessor function for the radius variable
getArea: returns the area of the circle which is calculated as area = pi * radius * radius
getDiameter: returns the diameter of the circle which is calculated as diameter = radius * 2
getCircumference: returns the circumference of the circle which is calculated as circumference = 2 * pi * radius

*/