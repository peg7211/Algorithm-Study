#include <iostream>
using namespace std;

int main() {
	int n = 1;
	int cnt = 0;

	cin >>  n;

	while (n % 5 != 0) {
		if (n == 1) {
			cout << -1 << '\n';
			return 0;
		}
		
		n -= 2;
		cnt++;
	}

	cnt += n / 5;

	cout << cnt << endl;

	return 0;
}