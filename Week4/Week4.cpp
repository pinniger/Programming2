//1)  Page 552, #48, #50, and #52
//2)  Write a program with a function :
//a) In the main function, define an integer array with five entries and assign values to the entries.
	//Display the entries in the order in which they occur within the array.
//b) Pass the array to a function. 
	//Within the function, dynamically allocate a new integer array.
	//Programmatically assign the value from the original array to the new array in reverse order such that the first entry in the original array becomes the fifth entry in the new array, 
	//the second entry in the original array becomes the fourth entry in the new array, and so on.
	// Display the contents of the new array in the function.
	//Do not return the new array from the function.
	//Do not change the contents of the original array.Use a pointer to an array, i.e., use dereferencing, when assigning and displaying the contents of the new array.
	//The dynamically allocated array will be deleted.
//Provide proof that the solution works per these requirements.

#include "stdafx.h"
#include <iostream>

using namespace std;

void doSomething(int[], int);

void main()
{
	// In the main function, define an integer array with five entries and assign values to the entries.
	const int ARRAYSIZE = 5;
	int intArray[ARRAYSIZE] = { 1,2,3,4,5 };

	// Display the entries in the order in which they occur within the array.
	for (int i = 0; i < ARRAYSIZE; i++) 
	{
		cout << intArray[i] << endl;
	}

	// Pass the array to a function. 
	doSomething(intArray, ARRAYSIZE);

	system("pause");
    return;
}

void doSomething(int arry[], int size)
{
	// Within the function, dynamically allocate a new integer array.
	int *ptrA = nullptr;
	ptrA = new int[size];

	// Programmatically assign the value from the original array to the new array in reverse order such that 
	// the first entry in the original array becomes the fifth entry in the new array
	// the second entry in the original array becomes the fourth entry in the new array, and so on.
	cout << "Reversing..." << endl;
	for (int i = 0; i < size; i++)
	{
		// use dereferencing, when assigning and displaying the contents of the new array.
		*(ptrA + (size - i - 1)) = arry[i];
	}

	// Display the contents of the new array in the function.
	for (int i = 0; i < size; i++)
	{
		// use dereferencing, when assigning and displaying the contents of the new array.
		cout << *(ptrA + i) << endl;
	}

	// The dynamically allocated array will be deleted.
	delete [] ptrA;

	// Do not return the new array from the function.
	return;
}

