#include <iostream>
using namespace std;

int bingo[5][5] = {};
int cnt = 0; //사회자가 부른 수를 세는 변수
int line = 0; //빙고 줄을 저장하는 변수
int bingo_num = 25; // 빙고를 외칠 때 사회자가 부른 수의 번째

//사회자가 부른 수가 저장된 배열 값을 0으로 초기화
void erase(int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (bingo[i][j] == n) {
				bingo[i][j] = 0;
			}
		}
	}
}

//line이 3개 이상인지 확인하는 함수
bool isBingo() {
	return line >= 3;
}

//줄이 그어지는지 확인하는 함수
void lineCheck() {
	line = 0;

	//가로줄 확인
	for (int i = 0; i < 5; i++) {
		bool isBingo1 = true;

		for (int j = 0; j < 5; j++) {
			if (bingo[i][j] != 0) {
				isBingo1 = false;
				break;
			}
		}

		if (isBingo1) {
			line++;
		}
		
	}

	//세로줄 확인
	for (int i = 0; i < 5; i++) {
		bool isBingo2 = true;

		for (int j = 0; j < 5; j++) {
			if (bingo[j][i] != 0) {
				isBingo2 = false;
				break;
			}
		}
		if (isBingo2) {
			line++;
		}
	}


	//대각선줄 확인
	bool isBingo3_1 = true;
	bool isBingo3_2 = true;
	
	for (int i = 0; i < 5; i++) {
		if (bingo[i][i] != 0) {
			isBingo3_1 = false;
		}
		if (bingo[i][4 - i] != 0) {
			isBingo3_2 = false;
		}
	}
	if (isBingo3_1) {
		line++;
	}
	if (isBingo3_2) {
		line++;
	}

	// 3줄이 그어지면 그 수 저장
	if (isBingo()) {
		if (bingo_num > cnt) {
			bingo_num = cnt;
		}
	}
}


int main() {
	int write_num;
	int erase_num;

	//빙고판 채우기
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> write_num;
			bingo[i][j] = write_num;
		}
	}

	//사회자가 부르는 수로 빙고 세기
	for (int i = 0; i < 25; i++) {
		cin >> erase_num;

		erase(erase_num);
		cnt++;

		lineCheck();
	}

	cout << bingo_num << endl;
	return 0;
}