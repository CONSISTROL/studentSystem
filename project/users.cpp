#include "users.h"

void users::signUp(){
	signIn();
	if (sameAccount()) {
		cout << "�û�����ע�ᣬע��ʧ��" << endl;
		wait();
		signUp();
		return;
	}

	/*�����ļ�


	*/

	cout << "ע����ɣ�����������ص�¼ҳ��";
	getchar();
	system("cls");

}
void users::signIn() {
	
		cout << "�������û�����"; cin >> account;
		cout << "���������룺"; cin >> password;

	
}

bool users:: sameAccount() {
	extern int num;
	for (int i = 0; i < num; i++) {
		if (0)
			return false;
	}
	return true;
}