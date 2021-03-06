// Week1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// function prototype
int multiFunction(int, int, char);

void main()
{
	int first = 6;
	int second = 3;

	int additionResult = multiFunction(first, second, '+');
	int subtractionResult = multiFunction(first, second, '-');
	int multiplicationResult = multiFunction(first, second, '*');
	int divisionResult = multiFunction(first, second, '/');

	cout << "The result of " << first << " + " << second << " = " << additionResult << endl;
	cout << "The result of " << first << " - " << second << " = " << subtractionResult << endl;
	cout << "The result of " << first << " * " << second << " = " << multiplicationResult << endl;
	cout << "The result of " << first << " / " << second << " = " << divisionResult << endl;

	system("pause");
	return;
}

int multiFunction(int firstInt, int secondInt, char operation)
{
	switch (operation)
	{
		case '+': return firstInt + secondInt;
		case '-': return firstInt - secondInt;
		case '*': return firstInt * secondInt;
		case '/': return firstInt / secondInt;
		default: return -1;
	}
}
