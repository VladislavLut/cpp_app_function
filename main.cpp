#include "Func.h"

int main() {
	system("chcp 1251");
	system("cls");
	int n;
	cout << "Введіть число: ";
	cin >> n;
	if (isPrime(n)) {
		cout << n << "є простим числом\n" << endl;
	}
	else {
		cout << n << "не є простим числом\n" << endl;
	}
	return 0;
}
