//최댓값, 최솟값 구하는 문제
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];
int main() {
	ios_base::sync_with_stdio(0);

	int N;
	
	
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];	
	}

	sort(arr, arr + N);

	cout << arr[0] << " " << arr[N-1];
	return 0;
}