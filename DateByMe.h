#pragma once
#include<iostream>
using namespace std;
class DateByMe
{
private:
	int day;
	int month;
	int year;
	int doom = 3;	// tinh tu nam 1900 doomday vao ngay 29/2 la thu 4 => 3
	int weekday;
public:
	DateByMe(int = 0, int = 0, int = 1900);
	~DateByMe();
	void DayofWeeks();
};

