#include <iostream>
using namespace std;

int main() {
	string plate;
	int height = 10;

	cin >> plate;

	for (int i = 0; i < plate.length() - 1; i++) {
		if (plate[i] == plate[i + 1]) {
			height += 5;
		}
		else {
			height += 10;
		}
	}

	cout << height;

	return 0;
}