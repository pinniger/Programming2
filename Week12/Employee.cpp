#include "stdafx.h"
#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string n, int num, string d)
{
	name = n;
	number = num;
	hireDate = d;
	return;
}


Employee::~Employee()
{
}

string Employee::getName() const
{
	return name;
}

void Employee::setName(string n)
{
	name = n;
	return;
}

int Employee::getNumber() const
{
	return number;
}

void Employee::setNumber(int n)
{
	number = n;
	return;
}

string Employee::getHireDate() const
{
	return string();
}

void Employee::setHireDate(string d)
{
	hireDate = d;
	return;
}
