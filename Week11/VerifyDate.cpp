#include "stdafx.h"
#include "VerifyDate.h"

using namespace std;
VerifyDate::VerifyDate()
{
	day = 1;
	month = 1;
	year = 2000;
}

VerifyDate::VerifyDate(int month, int day, int year)
{
	VerifyDate::day = day;
	VerifyDate::month = month;
	VerifyDate::year = year;
}


VerifyDate::~VerifyDate()
{
}

int VerifyDate::getMonth() const
{
	return month;
}

int VerifyDate::getDay() const
{
	return day;
}

int VerifyDate::getYear() const
{
	return year;
}

void VerifyDate::setMonth(int value)
{
	month = value;
}

void VerifyDate::setDay(int value)
{
	day = value;
}

void VerifyDate::setYear(int value)
{
	year = value;
}

std::string VerifyDate::printDate() const
{	
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

bool VerifyDate::checkDate() const
{
	// general validation
	if (year < 1850 || year > 2100 || day < 1 || day > 31 || month < 1 || month > 12)
		return false;
	 
	// 31 days
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
		return false;

	// 30 days
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	// handle leap years
	if ((month == 2 && !isLeap() && day > 28) || (month == 2 && isLeap() && day > 29))
		return false;

	return true;

}

bool VerifyDate::isLeap() const
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return true;
			else
				return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

