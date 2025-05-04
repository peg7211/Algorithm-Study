#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	long long num;
	priority_queue<int, vector<int>, greater<int>> pq; //변수들을 내림차순 정렬

	cin >> N;

	for (int i = 0; i < N * N; i++) {
		cin >> num;

		pq.push(num);

		// N개만 유지하기 위해
		if (pq.size() > 2*N) {
			pq.pop();
		}
	}

	for (int i = 0; i < N; i++) {
		pq.pop();
	}

	cout << pq.top() << endl;

	return 0;
}