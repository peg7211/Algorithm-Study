#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long A, B;
	cin >> A >> B;

	if (A == B || abs(A-B) == 1) {
		cout << 0 << '\n';
	}
	else if (A > B) {
		cout << A - B - 1 << '\n';

		for (long long i = B + 1; i < A; i++) {
			cout << i << " ";
		}
	}
	else {
		cout << B - A - 1 << '\n';

		for (long long i = A + 1; i < B; i++) {
			cout << i << " ";
		}
	}
	return 0;
}