#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
	while (num2 != 0) {
		int tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}

	return num1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		cout << 1LL * a * b / gcd(a, b) << '\n'; //long long 처리
	} 

	return 0;
}