#include "Func.h"

void printRectangle(int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << "* ";
		}

		cout << endl;
	}
}

int main() {
	system("chcp 1251");
	system("cls");
	int height, width;

	cout << "������ ������ ������������: ";
	cin >> height;
	cout << "������ ������ ������������: ";
	cin >> width;

	printRectangle(height, width);

	return 0;
}