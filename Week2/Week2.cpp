// Week2.cpp : Defines the entry point for the console application.
//

/*
Write a program which reads the numbers.txt file (available in BlackBoard in the Week 2 folder).  
The file contains a series of numbers, each written on a separate line. 
The program will read the contents of the file into an array and then display the following information:

-the lowest number in the array
-the highest number in the array
-the total of the numbers in the array
-the average of the numbers in the array.
-Provide proof that the solution works per these requirements.
*/


#include "stdafx.h"
#include <fstream>
#include <iostream>

using namespace std;

void main()
{
	int const ARRAY_SIZE = 12;
	int numArray[ARRAY_SIZE];

	fstream myFile;
	myFile.open("numbers.txt");

	int count = 0;
	while (count < ARRAY_SIZE && myFile >> numArray[count])
		count++;

	myFile.close();

	int highest = numArray[0];
	int lowest = numArray[0];
	int total = numArray[0];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (numArray[i] > highest)
			highest = numArray[i];

		if (numArray[i] < lowest)
			lowest = numArray[i];

		total += numArray[i];
	}

	int average = total / ARRAY_SIZE;

	cout << "The lowest in the array is " << lowest << endl;
	cout << "The highest in the array is " << highest << endl;
	cout << "The average of the array is " << average << endl;
	cout << "The total of the array is " << total << endl;

	system("pause");
    return;
}
