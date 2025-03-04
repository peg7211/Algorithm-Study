#include <iostream>
using namespace std;

int main() {
	int a;
	int arr[31] = { 0, };
	
	for (int i = 0; i < 28; i++) {
		cin >> a;

		arr[a] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] != 1) {
			cout << i << " ";
		}
	}
	return 0;
}