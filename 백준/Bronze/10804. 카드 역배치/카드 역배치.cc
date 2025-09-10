#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int f, l;

	for (int i = 0; i < 10; i++) {
		cin >> f >> l;
		
		while (f < l) {
			swap(arr[f], arr[l]);
			f++;
			l--;
		}
	}

	for (int i = 1; i < 21; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}