#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N = 1; // N은 몇 개의 연속된 자연수의 합
	int cnt = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		int fake = N;
		
		for (int j = i; j <= N; j++) {	
			fake -= j;

			if (fake == 0) {
				cnt++;
				break;
			}
			else if (fake < 0) {
				break;
			}
		}
	}

	cout << cnt << '\n';

	return 0;
}