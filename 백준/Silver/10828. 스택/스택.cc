#include <iostream>
using namespace std;

int arr[10000];
int pos = 0;

void push(int x) {
	arr[pos++] = x;
}

void pop() {
	if (pos == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << arr[pos-1] << '\n';
		pos--;
	}
}

 int size() {
	 return pos;
}

bool empty() {
	return pos == 0;
}

void top() {
	if (pos == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << arr[pos-1] << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0);

	int N, x;
	cin >> N;

	while (N--) {
		string str;
		cin >> str;

		if (str == "push") {
			cin >> x;

			push(x);
		}
		else if (str == "pop") {
			pop();
		}
		else if (str == "size") {
			cout << size() << '\n';
		}
		else if (str == "empty") {
			cout << empty() << '\n';
		}
		else if (str == "top") {
			top();
		}
	}
	return 0;
}