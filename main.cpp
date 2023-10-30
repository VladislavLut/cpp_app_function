#include "Func.h"

int factorial(int n){

	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	system("chcp 1251");
	system("cls");
	int n;
	cout << "¬вед≥ть число: ";
	cin >> n;
	cout << "‘актор≥ал" << n << "=" << factorial(n) << endl;
	return 0;
}