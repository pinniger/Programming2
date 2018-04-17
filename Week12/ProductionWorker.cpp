#include "stdafx.h"
#include "ProductionWorker.h"


ProductionWorker::ProductionWorker()
{
}

ProductionWorker::ProductionWorker(int s, double p)
{
	shift = s;
	payRate = p;
	return;
}


ProductionWorker::~ProductionWorker()
{
}

int ProductionWorker::getShift() const
{
	return shift;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
	return;
}

double ProductionWorker::getPayRate() const
{
	return payRate;
}

void ProductionWorker::setPayRate(double p)
{
	payRate = p;
	return;
}
