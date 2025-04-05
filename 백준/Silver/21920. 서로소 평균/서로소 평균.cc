#include <iostream>
#include <stack>
using namespace std;

//서로소 : 두 수 사이에 공통인 부분이 없음을 뜻함 
//(즉, 두 수의 최대공약수가 1인 경우)

//최대공약수를 구하는 함수 (유클리드 호제법)
int gcd(int cur, int n) {
	if (n == 0) {
		return cur;
	}
	return gcd(n, cur % n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N = 2, X = 2;
	double total = 0; // 서로소의 총 합
	int cnt = 0; // 수열 내 X와 서로소의 개수
	stack<int> A;

	cin >> N;

	//수열 받아서 배열에 저장하기
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		A.push(num);
	}

	cin >> X;

	while (!A.empty()) {
		//두 수가 서로소이면
		if (gcd(A.top(), X) == 1) {
			total += A.top();
			cnt++;
		}
		A.pop();
	}

	cout << total / cnt << endl;

	return 0;
}