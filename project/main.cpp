#include<ctime>
#include<fstream>
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
#include"administrator.h"
#include"birthday.h"
#include"mainMeun.h"
#include"users.h"
void wait();//倒计时
void add();//添加学生信息
void change();//更改学生信息
void search();//查找学生信息
void calculate();//统计全部学生总成绩、班上排名；各科的平均成绩、及格率
void showBar();//柱状图显示

const int N = 1000;
int num = 0;
ofstream file;
users A[N];

int main() {
	num = 2;
	A[0].signUp();

	return 0;
}



void add() {
	
}

void change() {

}

void search() {

}

void calculate() {

}

void showBar() {

}