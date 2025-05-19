#include <iostream>

using namespace std;

int main() {
	int number[9];
	int largest;
	int big_num;

	largest = number[0];
	for (int i = 0; i < 9; i++) {
		cin >> number[i];
		if (number[i] > largest) {
			largest = number[i];
			big_num = (i + 1);
		}
	}
	cout << largest << "\n" << big_num;
}