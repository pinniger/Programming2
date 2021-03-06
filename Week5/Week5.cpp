// Week5.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Write a program with three functions:  upper, lower, and reverse.
string upper(string *);
string lower(string *);
string reverse(string *);

void main()
{
	//The program will execute the functions in the following order:  upper, lower, and reverse.

	//When entering "AbCd"
	string strOrig = "AbCd";
	cout << "The original string value is " << strOrig << endl;
	
	//the upper function will return "ABCD"
	string strCopy = strOrig;
	string upperStr = upper(&strCopy);
	cout << "The result of the upper function is " << upperStr << endl;

	//the lower function will return "abcd"
	strCopy = strOrig;
	string lowerStr = lower(&strCopy);
	cout << "The result of the lower function is " << lowerStr << endl;

	//and the reverse function will return "aBcD"
	strCopy = strOrig;
	string reverseStr = reverse(&strCopy);
	cout << "The result of the reverse function is " << reverseStr << endl;
	system("pause");
}

//The upper function will accept a pointer to a string or C-string as an argument.  
string upper(string * str) 
{
	string upperString;
	//It will step through each character in the string converting it (where necessary) to uppercase.
	for (int i = 0; i < (*str).length(); i++)
	{
		char currentChar = (*str).at(i);	
		if (islower(currentChar))	
			upperString += (char)toupper(currentChar);
		else 
			upperString += currentChar;
	}	
	return upperString;
}

//The lower function will accept a pointer to a string or C-string as an argument.  
string lower(string * str)
{
	string lowerString;
	//It will step through each character in the string converting it (where necessary) to lowercase.
	for (int i = 0; i < (*str).length(); i++)
	{
		char currentChar = (*str).at(i);
		if (isupper(currentChar))
			lowerString += (char)tolower(currentChar);
		else
			lowerString += currentChar;
	}
	return lowerString;
}

//Like the upper and lower functions, the reverse function will accept a pointer to a string or C-string.  
string reverse(string * str)
{
	string reverseString;
	//It will step through each character in the string converting uppercase characters to lowercase and lowercase characters to uppercase; numbers and special characters will be unaffected.
	for (int i = 0; i < (*str).length(); i++)
	{
		char currentChar = (*str).at(i);
		if (islower(currentChar))
			reverseString += (char)toupper(currentChar);
		else
			reverseString += (char)tolower(currentChar);
	}
	return reverseString;
}