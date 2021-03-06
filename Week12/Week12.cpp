// Week12.cpp : Defines the entry point for the console application.
//

/*
Design a class named Employee.  The class should keep the following information in

- Employee name
- Employee number
- Hire date

Write one or more constructors and the appropriate accessor and mutator functions for the class.

Next, write a class name ProductionWorker that is derived from the Employee class.  The ProductionWorker class should have member variables to hold the following information:

- Shift (an integer)
- Hourly pay rate (a double)

The workday is divided into two shifts:  day and night.  
The shift variable will hold an integer value representing the shift that the employee works.  
The day shift is shift 1, and the night shift is shift 2.  
Write one or more constructors and the appropriate accessor and mutator functions for the class.  
Demonstrate the classes by writing a program that uses a ProductionWorker object.
Provide proof that the solution works per these requirements.
*/

#include "stdafx.h"
#include <iostream>
#include "ProductionWorker.h"

using namespace std;

void main()
{
	ProductionWorker worker;
	worker.setName("Clair");
	worker.setNumber(12345);
	worker.setHireDate("1/1/2015");
	worker.setShift(1);
	worker.setPayRate(25.13);

	cout << "The employee's name is: " << worker.getName() << endl;
	cout << "The employee's number is: " << worker.getNumber() << endl;
	cout << "The employee's hire date is: " << worker.getHireDate() << endl;
	cout << "The employee's shift is: " << worker.getShift() << endl;
	cout << "The employee's pay rate is: $" << worker.getPayRate() << endl;

	system("pause");
    return;
}

