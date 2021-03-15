#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class birthday {
public:
	birthday(int a = 1949, int b = 10, int c = 1);
	void outputbirthday();
private:
	int year, month, day;
};
