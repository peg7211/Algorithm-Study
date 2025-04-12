#include <iostream>
#include <algorithm>
using namespace std;

//상자를 최소한으로 쓸 때의 사용되는 상자 개수를 출력
//박스를 다 채울 필요는 없고, 일부만 채워도 됨.

int main() {
	int T, J, N;
	int r, c; 
	int boxes[1000] = {};

	cin >> T; //테스트 케이스 개수 입력
	
	while (T--) {
		int cnt = 0;

		cin >> J >> N; //사탕과 상자의 개수 입력

		for (int i = 0; i < N; i++) {
			cin >> r >> c;

			boxes[i] = r * c;
		}

		sort(boxes, boxes + N, greater<int>());

		for (int i = 0; i < N; i++) {
			if (J > 0) {
				J -= boxes[i];
				cnt++;
			}
			else {
				cout << cnt << endl;
				break;
			}
		}
	}

	return 0;
}