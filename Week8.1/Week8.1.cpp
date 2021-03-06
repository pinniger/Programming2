#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
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
	Inventory inv;
	double totalQuantity = 0, totalWholesaleCost = 0, totalRetailCost = 0;

	fstream inFile("c:\\temp\\inventory.txt", ios::in | ios::binary);
	inFile.read(reinterpret_cast<char *>(&inv), sizeof(inv));

	while (!inFile.eof())
	{
		totalQuantity += inv.Quantity;
		totalWholesaleCost += inv.WholesaleCost;
		totalRetailCost += inv.RetailCost;

		inFile.read(reinterpret_cast<char *>(&inv), sizeof(inv));
	}
	inFile.close();

	cout << "Total Inventory: " << totalQuantity << endl;
	cout << "Total Wholesale Cost: $" << totalWholesaleCost << endl;
	cout << "Total Retail Cost: $" << totalRetailCost << endl;

	system("pause");

	return;
}
