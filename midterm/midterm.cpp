// midterm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
using namespace std;

void calc(int a, int& b)
{
	int c;

	c = a + 2;
	a = a * 3;
	b = c + a;
}


int main()
{
	ofstream dataFile("info.dat", ios::in);
	char stuff[81];
	//dataFile.put(stuff);

	system("pause");
    return 0;
}

