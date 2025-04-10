#include <iostream>
using namespace std;

int Rev(int num) {
	int result = 0, tmp = 0;

	// 천의 자리일 경우
	//Rev(X) + Rev(Y)의 maximum = 1998
	if (num >= 1000) {
		tmp = num % 10;
		num /= 10;

		result += tmp * 1000;
	}

	// 백의 자리일 경우
	if (num >= 100) {
		tmp = num % 10;
		num /= 10;

		result += tmp * 100;
	}

	// 십의 자리일 경우
	if (num >= 10) {
		tmp = num % 10;
		num /= 10;

		result += tmp * 10;
	}

	// 일의 자리일 경우
	if (num < 10) {
		result += num;
	}

	return result;
}

int main() {
	int X, Y;

	cin >> X >> Y;

	cout << Rev(Rev(X) + Rev(Y)) << endl;

	return 0;
}