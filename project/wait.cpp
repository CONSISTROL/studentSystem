#include "wait.h"
 void wait() {
	for (int i = 3; i > 0; i--) {
		cout << i << "秒后自动跳转";
		Sleep(1000);
		printf("\r");
	}
	system("cls");
}