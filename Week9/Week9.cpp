#include "stdafx.h"
#include "Circle.h"
#include <iostream>
using namespace std;

void main()
{
	double radiusEntered;
	cout << "Enter circle radius: ";
	cin >> radiusEntered;
	
	Circle circle(radiusEntered);
	cout << "The area of the circle is " << circle.getArea() << endl;
	cout << "The diameter of the circle is " << circle.getDiameter() << endl;
	cout << "The circumference of the circle is " << circle.getCircumference() << endl;
	system("pause");
    return;
}

/*
Write a program with driver, implementation, and specification files which demonstrates 
the Circle class by asking the user for the circle's radius, 
creating a Circle object, and then reporting the circle's area, diameter, and circumference.

The specification file will contain declarations for the member variables and prototypes for the member functions.  
The implementation file will contain the fully defined member functions and constructors.

Provide proof that the solution works per these requirements.
*/