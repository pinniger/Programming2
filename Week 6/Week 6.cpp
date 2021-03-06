// Week 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Write a program which uses a structure having the indicated member names to store the following data:
// Name (student name)
// IDnum (student ID number)
// Tests (an array of three test scores)
// Average (average test score)
// Grade (course grade)
struct Student {
	string Name;
	int IDnum;
	int Tests[3];
	double Average;
	char Grade;
};

void CalculateAverage(Student *, int const);
void CalculateGrade(Student * s);

void main()
{
	// The program will keep a list of three test scores for one student.  
	// The program may prompt the user for the name, ID number, and test scores, or these may be assigned within the program.
	int const ARRAY_SIZE = 3;
	Student student = { "Clair Inniger", 12345, { 85,92,100 } };

	// The average test score will be calculated and stored in the average member of the structure. 
	CalculateAverage(&student, ARRAY_SIZE);

	// The course grade will be assigned based on this scale; Store the course grade in the Grade member of the structure.
	CalculateGrade(&student);

	// Display the student name, ID, average test score, and course grade on the screen.
	cout << "Name " << student.Name << endl;
	cout << "Id " << student.IDnum << endl;
	cout << "Average " << student.Average << endl;
	cout << "Grade " << student.Grade << endl;

	system("pause");
	return;
}

void CalculateAverage(Student * s, int const numOfTests)
{
	int total = 0;
	for (int i = 0; i < numOfTests; i++)
		total += (*s).Tests[i];

	(*s).Average = total / numOfTests;
}

void CalculateGrade(Student * s)
{
	// A 91 - 100
	// B 81 - 90
	// C 71 - 80
	// D 61 - 70
	// F 0 - 60
	int avg = (*s).Average;
	if (avg >= 91)
		(*s).Grade = 'A';
	else if (avg >= 81 && avg <= 90)
		(*s).Grade = 'B';
	else if (avg >= 71 && avg <= 80)
		(*s).Grade = 'C';
	else if (avg >= 61 && avg <= 70)
		(*s).Grade = 'D';
	else if (avg <= 60)
		(*s).Grade = 'F';
}
