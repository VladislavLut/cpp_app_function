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
	int n;
	cout << "¬вед≥ть число: ";
	cin >> n;
	cout << "‘актор≥ал" <<n<< "="
}