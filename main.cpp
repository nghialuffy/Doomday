#include<iostream>
#include<math.h>
using namespace std;
class DoomDay {
private: 
	int day;
	int month;
	int year;
	int doom=3;	// tinh tu nam 1900 doomday vao ngay 29/2 la thu 4 => 3
	int weekday;
public: 
	void Nhap();
	void Xuat();
};
void DoomDay :: Nhap() {
	cout << "Nhap ngay thang nam cach nhau 1 dau cach : " ;
	cin >> day >> month >> year;
}
void DoomDay::Xuat()
{
	int a = year % 1900 / 12;
	int b = year % 1900 % 12;
	int c = b / 4;
	int d = a + b + c;
	int e = d % 7;
	doom += e;
	if (month == 1)
		if (year % 4 == 0)
		{
			weekday = -(25 - day) % 7+doom;
		}
		else {
			weekday = -(31 - day) % 7 + doom;
		}
	if (month == 2) {
		if (year % 4 == 0) {
			weekday = -(29 - day) % 7 + doom;
		}
		else {
			weekday= -(28 - day) % 7 + doom;
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
	if (weekday %7 == 1)
		cout << "Thu hai" << endl;
	if (weekday % 7 == 2)
		cout << "Thu ba" << endl;
	if (weekday % 7 == 3)
		cout << "Thu tu" << endl;
	if (weekday % 7 == 4)
		cout << "Thu nam" << endl;
	if (weekday % 7 == 5)
		cout << "Thu sau" << endl;
	if (weekday % 7 == 6)
		cout << "Thu bay" << endl;
	if (weekday % 7 == 0)
		cout << "Chu nhat" << endl;
}
int main() {
	DoomDay dd;
	dd.Nhap();
	dd.Xuat();
	system("pause");
	return 0;
}