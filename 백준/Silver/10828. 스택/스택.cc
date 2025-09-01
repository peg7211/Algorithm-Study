#include <iostream> 
#include <stack>
using namespace std;


int main() {
	ios::sync_with_stdio(0), cin.tie(0);

	stack<int> s;

	string str;
	int N;
	cin >> N;

	while (N--) {
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;

			s.push(x);
		}
		else if (str == "pop") {
			if (s.size() == 0) {
				cout << "-1" << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << '\n';
		}
		else if (str == "empty") {
			cout << s.empty() << '\n';
		}
		else if (str == "top") {
			if (s.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
	}
	return 0;
}