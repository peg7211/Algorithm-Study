#include <iostream>
#include <algorithm>
using namespace std;

int rad[100] = {};

//두 수의 최대공약수를 구하는 함수
int FindGCD(int num1, int num2) {
	int g = 0;
	for (int i = 1; i <= min(num1, num2); i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			g = i;
		}
	}
	return g;
}

int main() {
	int N = 3; // 상근이가 발견한 링의 개수
	int radius = 0, gcd = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> radius;

		rad[i] = 2 * radius; //링의 길이를 배열에 저장
	}

	for (int i = 1; i < N; i++) {
		gcd = FindGCD(rad[0], rad[i]);

		cout << (rad[0] / gcd) << "/" << (rad[i] / gcd) << endl;
	}

	return 0;
}