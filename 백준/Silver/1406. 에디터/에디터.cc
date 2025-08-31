#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	list<char> str;
	for (auto c : s) str.push_back(c);

	auto cursor = str.end();

	int M;
	cin >> M;

	while (M--) {
		char edit;
		cin >> edit;

		if (edit == 'L') {
			if (cursor != str.begin()) {
				cursor--;
			}
		}

		else if (edit == 'D') {
			if (cursor != str.end()) {
				cursor++;
			}
		}

		else if (edit == 'B') {
			if (cursor != str.begin()) {
				cursor--;
				cursor = str.erase(cursor);
			}
		}

		else if (edit == 'P') {
			char $;
			cin >> $;
			str.insert(cursor, $);
		}
	}

	for (auto c : str) cout << c;
}
