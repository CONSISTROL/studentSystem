#include "birthday.h"

extern ofstream file;
birthday::birthday(int a , int b, int c) {
	year = a; month = b; day = c;
}
void birthday:: outputbirthday() {
	file << "birthday:" << year << "." << month << "." << day << endl;
	cout << "birthday:" << year << "." << month << "." << day << endl;
}