#include <iostream>
using namespace std;

int main() {
	int N;
	int sugar_bag5 = 0;
	int sugar_bag3 = 0;
	
	cin >> N;

	while (N % 5 != 0) {
		N -= 3;
		sugar_bag3++;

		if (N == 1) {
			cout << -1 << endl;
			return 0;
		}
	}


	sugar_bag5 = N / 5;
	
	if (N % 5 != 0) {

	}

	cout << sugar_bag5 + sugar_bag3 << endl;

	return 0;

}