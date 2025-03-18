#include <iostream>
using namespace std;

void Factorial(int &s, int num) {
	while (num > 1) {
		s *= num;
		num--;
	}
}

//이항 계수 : 이항식을 이항 정리로 전개했을 때 각 항의 계수
// n! / (k!(n-k)!)
int main() {
	int N = 1, K = 0;
	int den = 1; //분모 값을 저장할 변수
	int num = 1; //분자 값을 저장할 변수

	cin >> N >> K;

	Factorial(num, N); //분자 계산
	Factorial(den, K); //분모 계산
	Factorial(den, (N - K));

	double result = num / den;

	cout << result << endl;

	return 0;
}