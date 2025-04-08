#include <iostream>
using namespace std;

bool isEven(int num) {
	return num % 2 == 0;
}

int main() {
	string str, result;
	int cnt = 0;

	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'X') {
			cnt++;
		}
		//'.'을 만나면 이전에 있던 X 를 바탕으로 result에 값 넣기
		else {
			//cnt가 짝수면
			if (isEven(cnt)) {
				while (cnt >= 4) {
					result += "AAAA";
					cnt -= 4;
				}
				
				if (cnt == 2) {
					result += "BB";
					cnt = 0;
				}
				
			}

			//cnt가 홀수면
			else {
				cout << "-1" << endl;
				return 0;
			}

			result += '.';
		}

		
	}

	// X로 마무리가 된다면
	if (isEven(cnt)) {
		while (cnt >= 4) {
			result += "AAAA";
			cnt -= 4;
		}
				
		if (cnt == 2) {
			result += "BB";
			cnt = 0;
		}
	}
	else {
		cout << -1 << endl;
		return 0;
	}

	cout << result << endl;

	return 0;
}