#include "Func.h"

void printRectangle(int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << "* ";
		}

		cout << endl;
	}
}
int factorial(int n) {

	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int cube(int n) {
	return n * n * n;
}
int main() {
	int a, b;
}
bool isPositive(int value) {
	if (value >= 0) {
		return true;
	}
	else {
		return false;
	}
}
