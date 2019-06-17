#include "DateByMe.h"
DateByMe::DateByMe(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

DateByMe::~DateByMe()
{
}

void DateByMe::DayofWeeks()
{
	int doom = 3;	// tinh tu nam 1900 doomday vao ngay 29/2 la thu 4 => 3
	int weekday;
	int a = year % 1900 / 12;
	int b = year % 1900 % 12;
	int c = b / 4;
	int d = a + b + c;
	int e = d % 7;
	doom += e;
	if (month == 1)
		if (year % 4 == 0)
		{
			weekday = -(25 - day) % 7 + doom;
		}
		else {
			weekday = -(31 - day) % 7 + doom;
		}
		if (month == 2) {
			if (year % 4 == 0) {
				weekday = -(29 - day) % 7 + doom;
			}
			else {
				weekday = -(28 - day) % 7 + doom;
			}
		}
		if (month == 3) {
			weekday = -(7 - day) % 7 + doom;
		}
		if (month == 4) {
			weekday = -(4 - day) % 7 + doom;
		}
		if (month == 5) {
			weekday = -(9 - day) % 7 + doom;
		}
		if (month == 6) {
			weekday = -(6 - day) % 7 + doom;
		}
		if (month == 7) {
			weekday = -(11 - day) % 7 + doom;
		}
		if (month == 8) {
			weekday = -(8 - day) % 7 + doom;
		}
		if (month == 9) {
			weekday = -(5 - day) % 7 + doom;
		}
		if (month == 10) {
			weekday = -(10 - day) % 7 + doom;
		}
		if (month == 11) {
			weekday = -(7 - day) % 7 + doom;
		}
		if (month == 12) {
			weekday = -(12 - day) % 7 + doom;
		}
		if (weekday < 0)
			weekday += 7;
		if (weekday % 7 == 1)
			cout << "Monday" << endl;
		if (weekday % 7 == 2)
			cout << "Tuesday" << endl;
		if (weekday % 7 == 3)
			cout << "Wednesday" << endl;
		if (weekday % 7 == 4)
			cout << "Thusday" << endl;
		if (weekday % 7 == 5)
			cout << "Friday" << endl;
		if (weekday % 7 == 6)
			cout << "Saturday" << endl;
		if (weekday % 7 == 0)
			cout << "Sunday" << endl;
}
