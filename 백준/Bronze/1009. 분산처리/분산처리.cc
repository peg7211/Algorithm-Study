#include <iostream>
using namespace std;

int main() {
	int T = 0; //테스트 케이스의 개수

	cin >> T;

	while (T--) {
		int a = 1, b = 1;// 데이터의 개수 (a^b)
		int com_num = 1; // 마지막 컴퓨터 번호를 저장하는 변수
		
		cin >> a >> b;

		

		for (int i = 0; i < b; i++) {
			com_num = (com_num * a) % 10;
		}

		if (com_num == 0) {
			cout << 10 << endl;
		}
		else {
			cout << com_num << endl;
		}
		
	}

	return 0;
}