#include "wait.h"
 void wait() {
	for (int i = 3; i > 0; i--) {
		cout << i << "����Զ���ת";
		Sleep(1000);
		printf("\r");
	}
	system("cls");
}