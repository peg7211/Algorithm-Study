#include <iostream>
#define MAX_N 100000000
using namespace std;

int arr[3] = {}; //n개의 자연수를 저장할 배열
int min_arr[100] = {};

int main() {
	int n = 2; // 자연수 입력받을 개수를 저장하는 변수 
	int num = 1; // 입력받은 수를 저장하는 변수
	int min_num = MAX_N; //입력받은 수 중 가장 작은 수를 저장하는 변수
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		arr[i] = num;

		if (min_num > num) {
			min_num = num;
		}
	}

	//입력받은 수 중 가장 작은 수의 약수를 배열에 저장
	for (int i = 1; i <= min_num; i++) {
		if (min_num % i == 0) {
			min_arr[cnt] = i;
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++) {
		if (arr[0] % min_arr[i] == 0 && arr[1] % min_arr[i] == 0) {
			if (n == 3) {
				if (arr[2] % min_arr[i] == 0) {
					cout << min_arr[i] << endl;
				}
			}
			else {
				cout << min_arr[i] << endl;
			}	
		}
	}
	
	return 0;
}