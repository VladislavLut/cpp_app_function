#include "Func.h"


int main() {
	system("chcp 1251");
	system("cls");
	int n;
	cout << "������ �����: ";
	cin >> n;
	cout << "��������" << n << "=" << factorial(n) << endl;
	return 0;
}