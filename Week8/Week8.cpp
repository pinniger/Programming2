
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

struct Inventory {
	char Description[20];
	int Quantity;
	double WholesaleCost;
	double RetailCost;
	char DateAdded[10];
};

void main()
{
	Inventory Tv1 = { "Samsung", 10, 300.99, 497.99, "1/22/2018" };
	Inventory Tv2 = { "Sony", 8, 350.99, 675.99, "1/30/2018" };
	Inventory Tv3 = { "Visio", 20, 220.99, 499.99, "2/09/2018" };
	Inventory Tv4 = { "Panasonic", 5, 349.99, 449.99, "2/23/2018" };
	Inventory Tv5 = { "Sharp", 3, 399.99, 599.99, "3/18/2018" };

	Inventory AllTvs[5]{ Tv1, Tv2, Tv3, Tv4, Tv5 };

	fstream outFile("c:\\temp\\inventory.txt", ios::out | ios::app | ios::binary);
	
	for (int i = 0; i < 5; i++)
	{
		outFile.write(reinterpret_cast<char *>(&AllTvs[i]), sizeof(AllTvs[i]));
	}

	outFile.close();
    return;
}