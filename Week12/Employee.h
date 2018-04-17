#pragma once
#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(string, int, string);
	~Employee();
	string getName() const;
	void setName(string);

	int getNumber() const;
	void setNumber(int);

	string getHireDate() const;
	void setHireDate(string);

private:
	string name;
	int number;
	string hireDate;

};

