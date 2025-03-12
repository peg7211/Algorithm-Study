#include <iostream>
using namespace std;



int main() {
	int N; //관찰 횟수
	int cnt = 0;
	
	int cows[11];

	//배열을 모두 -1로 초기화
	for (int i = 0; i < 11; i++) {
		cows[i] = -1;
	}

	cin >> N;

	while (N--) {
		int cow_num = 1, cow_pos = -1;

		cin >> cow_num >> cow_pos;

		if (cows[cow_num] == -1) { //처음 입력받는다면
			cows[cow_num] = cow_pos;
		}
		else {
			if (cows[cow_num] != cow_pos) {
				cows[cow_num] = cow_pos;
				cnt++;
			}
		}

	}

	cout << cnt << endl;

	return 0;
}