#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;

	int N, K;
	cin >> N >> K;

	//큐에 값 넣기
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		for (int i = 0; i < K-1; i++) {
			int tmp = q.front(); //tmp에 front값 저장
			q.pop(); //front pop해서 없애고
			q.push(tmp); //다시 뒤에다가 push하기
		}
		//그럼 k번째 수가 front에 존재하므로
		cout << q.front();
		q.pop();

		if (!q.empty()) {
			cout << ", ";
		}
	}
	cout << ">";

	return 0;
}