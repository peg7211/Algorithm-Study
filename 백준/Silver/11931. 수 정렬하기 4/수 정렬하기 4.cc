#include <iostream>
#include <algorithm>
#define MAX_N 1000001
using namespace std;

int arr[MAX_N] = {};

int main() {
	int N = 1;
	
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, greater<int>());

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}