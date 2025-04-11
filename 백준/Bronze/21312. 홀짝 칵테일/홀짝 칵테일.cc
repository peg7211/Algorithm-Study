#include <iostream>
#include <algorithm>
using namespace std;

//홀짝 칵테일 = 들어가는 음료들의 고유 번호 곱
//맛이 홀수인 칵테일이 더 맛도리
//똑같이 홀수, 짝수인 맛끼리는 맛이 더 큰 칵테일이 맛도리
//최소 하나의 음료 사용
//조합해서 가장 맛있다고 느끼는 칵테일 맛 출력

bool isOdd(int num) {
	return num % 2 == 1;
}

int isItOdd(int num, int d) {
	if (isOdd(num)) {
		d *= num;
		return abs(d);
	}
	else {
		return d;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C; //음료의 고유 번호
	int best_drink = -1; //홀수 중 가장 수가 큰 칵테일 맛

	cin >> A >> B >> C;

	best_drink = isItOdd(A, best_drink);
	best_drink = isItOdd(B, best_drink);
	best_drink = isItOdd(C, best_drink);

	if (best_drink == -1) {
		cout << A * B * C << endl;
	}
	else {
		cout << best_drink << endl;
	}

	return 0;
}