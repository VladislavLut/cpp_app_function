#include "Func.h"

int main() {
	system("chcp 1251");
	system("cls");
	int n;
	cout << "������ �����: ";
	cin >> n;
	if (isPrime(n)) {
		cout << n << "� ������� ������\n" << endl;
	}
	else {
		cout << n << "�� � ������� ������\n" << endl;
	}
	return 0;
}
