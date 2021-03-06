
#include "stdafx.h"
#include "VerifyDate.h"
#include <iostream>
/*

Create a project consisting of three files – driver program, implementation, and specification - which will allow a month, day, and year 
between January 1, 1850, and December 31, 2100, to be entered and verified as valid. 

The solution will satisfy the following requirements:

(1) Create a class called VerifyDate that will contain data members and member functions to meet the listed criteria listed:

	-The VerifyDate class is used for inputting and validating a date by month, day, and year.
	-Create private integer data members names: month, day, year.
	-A default constructor will set the date to 1/1/2000; another constructor may be created with parameters for the month, day, and year.
	-Create accessor and mutator functions for the date variables.
	-Create a public function, PrintDate, to print the date in the form mm/dd/year, e.g., 10/22/2000 or 4/08/2011.
	-Create a private function, IsLeap, which will return true when the year is a leap year and false when it is not.
	-Create a public function, CheckDate, which will return true when the month, day, and year are valid and false when they are not. 
		For example, to be valid, the day must be appropriate for the given month and/or year, if a leap year. 
		The date must be between January 1, 1850, and December 31, 2100.

(2) Create a specification file containing the declaration of the VerifyDate class.

(3) Create a implementation file containing the member function definitions for VerifyDate.

(4) Create a driver program which uses the VerifyDate class. The main function should prompt the user to input month, day, and year, call the function to display the date, call the function to verify the date and indicate the result to the user, and permit the user to enter another date for verification.

(5) Debug the program.

Provide proof that the solution works per these requirements.

Supporting Information:


In a leap year, February has 29 days. The following three criteria determine which years will be leap years:

A year which is divisible by 400 is a leap year.
A year not divisible by 400 but which is divisible by 100 is NOT a leap year.
A year not divisible by 100 but which is divisible by 4 is a leap year.
Example: 2000, 2004, and 2008 are leap years. 1900 and 2100 are not leap years.

Days in each month: January = 31, February = 28 or 29, March = 31, April = 30, May = 31, June = 30, July = 31, August = 31, September = 30, October = 31, November = 30, December = 31.

*/
using namespace std;

void main()
{
	int month;
	int day;
	int year;

	cout << "Enter month: ";
	cin >> month;

	cout << "Enter day: ";
	cin >> day;

	cout << "Enter year: ";
	cin >> year;


	VerifyDate date(month, day, year);

	string validText = "not valid";
	if (date.checkDate())
		validText = "valid";

	cout << "You entered the date " << date.printDate() << " and it is " << validText << endl;

	system("pause");
    return;
}

