#pragma once
#include <string>
class VerifyDate
{
public:
	VerifyDate();
	VerifyDate(int, int, int);
	~VerifyDate();

	int getMonth() const;
	int getDay() const;
	int getYear() const;

	void setMonth(int);
	void setDay(int);
	void setYear(int);

	std::string printDate() const;
	bool checkDate() const;

private:
	int month;
	int day;
	int year;
	bool isLeap() const;
};

