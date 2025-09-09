#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[9] = {};
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	int diff = sum - 100;

	sort(arr, arr+9);

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {

			if (arr[i] + arr[j] == diff) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) {
						continue;
					}
					else {
						cout << arr[k] << '\n';
					}
				}
				return 0;
			}
		}
	}

	return 0;
}