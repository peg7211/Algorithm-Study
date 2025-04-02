#include <iostream>
using namespace std;

int stock_price[14] = {};

//준현이의 자산 계산하는 함수
//주식을 살 수 있으면 가능한 만큼 즉시 매수
int j_asset(int money) {
	int stock = 0; // 구매한 주식 수
	int total = 0; // 총 자산

	for (int i = 0; i < 14; i++) {
		if (money >= stock_price[i]) {
			stock += money / stock_price[i];
			money %= stock_price[i];
		}
	}

	total = money + stock_price[13] * stock;
	
	return total;
}

//성민이의 자산 계산하는 함수
//33 매매법
int s_asset(int money) {
	int stock = 0; //구매한 주식 수
	int total = 0; // 총 자산

	for (int i = 0; i < 11; i++) {
		//주식이 3일째 상승하면
		if (stock_price[i] < stock_price[i + 1] 
			&& stock_price[i + 1] < stock_price[i + 2] &&
			stock_price[i + 2] < stock_price[i + 3]) {
			//전량 매도
			if (stock > 0) {
				money += stock_price[i+3] * stock;
				stock = 0;
			}
		}

		//주식이 3일째 하락하면
		else if (stock_price[i] > stock_price[i + 1] 
			&& stock_price[i + 1] > stock_price[i + 2] &&
			stock_price[i + 2] > stock_price[i + 3]) {
			//전량 매수
			if (money >= stock_price[i+3]) {
				stock += money / stock_price[i+3];
				money %= stock_price[i+3];
			}
		}
	}

	total = money + stock_price[13] * stock;

	return total;
}


// 1월 14일 자산 = 현금 + 1/14일의 주가 * 주식 수

int main() {
	int cash;

	cin >> cash; //준현이와 성민이에게 주어진 현금
	
	//MachineDuck 주가를 배열에 저장
	for (int i = 0; i < 14; i++) { 
		cin >> stock_price[i];
	}

	if (j_asset(cash) > s_asset(cash)) {
		cout << "BNP" << '\n';
	}
	else if (j_asset(cash) < s_asset(cash)) {
		cout << "TIMING" << '\n';
	}
	else {
		cout << "SAMESAME" << '\n';
	}
}