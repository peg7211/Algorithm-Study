#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;

	int arr[26] = {};

	for (int i = 0; i < S.length(); i++) {
		arr[int(S[i]) - 97] ++; // 알파벳 아스키 코드 시작이 97부터이므로
	}

	for (int num : arr) {
		cout << num << " ";
	}

	return 0;
}