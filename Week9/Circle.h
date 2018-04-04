#pragma once
class Circle
{
public:
	Circle();
	Circle(double radiusValue);
	~Circle();
	
	void setRadius(double);
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	
private:
	double radius;
	double const PI = 3.14159;
};

