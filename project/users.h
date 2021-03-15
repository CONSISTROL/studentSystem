#pragma once
#include<iostream>
#include<string>
#include"wait.h"
using namespace std;

class users {
public:
	void signUp();
	void signIn();
	bool sameAccount();
private:
	string account, password;
};
