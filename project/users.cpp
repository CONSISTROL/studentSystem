#include "users.h"

void users::signUp(){
	signIn();
	if (sameAccount()) {
		cout << "用户名已注册，注册失败" << endl;
		wait();
		signUp();
		return;
	}

	/*存入文件


	*/

	cout << "注册完成，按任意键返回登录页面";
	getchar();
	system("cls");

}
void users::signIn() {
	
		cout << "请输入用户名："; cin >> account;
		cout << "请输入密码："; cin >> password;

	
}

bool users:: sameAccount() {
	extern int num;
	for (int i = 0; i < num; i++) {
		if (0)
			return false;
	}
	return true;
}