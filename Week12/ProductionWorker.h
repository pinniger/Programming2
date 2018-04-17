#pragma once
#include "Employee.h"

class ProductionWorker :
	public Employee
{
public:
	ProductionWorker();
	ProductionWorker(int, double);
	~ProductionWorker();

	int getShift() const;
	void setShift(int);

	double getPayRate() const;
	void setPayRate(double);

private:
	int shift;
	double payRate; 
};

