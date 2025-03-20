#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	string str;
	queue<int> q;

	cin >> N;

	while (N--) {
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;

			q.push(x);
		}

		else if (str == "pop") {
			//비어 있으면 -1 출력
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				//큐에서 가장 앞에 있는 정수 출력
				cout << q.front() << '\n';
				//큐에서 가장 앞에 있는 정수 빼기
				q.pop();
			}
			
		}

		else if (str == "size") {
			cout << q.size() << '\n';
		}

		else if (str == "empty") {
			if (q.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}

		else if (str == "front") {
			if (q.empty()) {
				cout << "-1"<< '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}

		else if (str == "back") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}

	return 0;
}