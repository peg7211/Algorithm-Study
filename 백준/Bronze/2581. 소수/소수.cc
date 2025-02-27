#include <iostream>
using namespace std;

//num이 소수인지 확인하는 변수
bool IsPrime(int num) {
	if (num == 1) {
		return false;
	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int M = 1, N = 1; // M과 N은 자연수
	int min = 10000; // M이상 N이하의 소수 중 최솟값을 저장하는 변수
	int sum = 0; // M이상 N이하의 소수들의 합을 저장하는 변수

	cin >> M;
	cin >> N;

	for (int i = M; i <= N; i++) {
		if (IsPrime(i)) {
			sum += i;

			if (min > i) {
				min = i;
			}
		}
	}

	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl;
		cout << min << endl;
	}

	return 0;
}