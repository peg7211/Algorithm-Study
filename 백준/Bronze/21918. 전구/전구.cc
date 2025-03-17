#include <iostream>
#define MAX_N 4001
using namespace std;

int lamps[MAX_N] = {};

//전구 상태를 이전과 반대가 되게 변경하는 함수
void Change(int num) {
	if (lamps[num] == 1) {
		lamps[num] = 0;
	}
	else {
		lamps[num] = 1;
	}
}

//명령어에 따라 전구 상태 변경 함수
void Transport(int A, int B, int C) {	
	// a가 1인 경우 -> b = i , c = x 의미
	if (A == 1) {
		lamps[B] = C; //i번째 전구 상태를 x로 변경
	}
	
	// a가 2, 3, 4 중 하나 -> b = l, c = r 의미
	else {
		// l~r번째 전구 상태
		for (int i = B; i <= C; i++) {
			if (A == 2) {
				Change(i); //반대로 변경
			}
			else if (A == 3) {
				lamps[i] = 0; //전부 끄기
			}
			else if (A == 4) {
				lamps[i] = 1; // 전부 켜기
			}
		}
	}
}

int main() {
	// N : 전구 개수 , M : 입력되는 명령어 개수
	int N = 1, M = 1; 

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		int s; // N개의 전구가 어떤 상태인지

		cin >> s;

		lamps[i] = s; // 배열에 각 전구 상태 저장
	}

	//명령어 입력 받기
	for (int i = 0; i < M; i++) {
		// a : a번째 명령어 의미

		int a = 1, b, c;

		cin >> a >> b >> c;

		Transport(a, b, c);
	}

	for (int i = 1; i <= N; i++) {
		cout << lamps[i] << " ";
	}

	return 0;
}