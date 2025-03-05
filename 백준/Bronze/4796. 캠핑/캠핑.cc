#include <iostream>
using namespace std;

int main() {
	int L, P; //연속하는 P일 중 L일 동안 사용 가능.
	int V; //휴가 기간
	int case_num = 1;

	while (true) {
		cin >> L >> P >> V;

		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		
		int divide_day = V / P; // V를 P로 나눈 값
		int rest_day = V % P;  // V를 P로 나누고 나머지 값
	
		if (rest_day >= L) {
			divide_day++;
			rest_day = 0;
		}
		
		cout << "Case " << case_num << ": " << (L * divide_day + rest_day) << endl;
		case_num++;
	}

	return 0;

}