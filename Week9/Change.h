#pragma once
class Change 
{
	public:
		int pennies;
		int nickels;
		int dimes;
		int quarters;
		Change()
		{ pennies = nickels = dimes = quarters = 0; }
		Change(int d, int q, int n = 50, int p = 100);
};

Change::Change(int p, int d, int q, int n) {

	pennies = p;
	nickels = n;
	dimes = d;
	quarters = q;
}