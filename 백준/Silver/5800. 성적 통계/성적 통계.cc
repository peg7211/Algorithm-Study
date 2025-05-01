#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int K, N;
	int X = 1;
	int score;
	int cl[50] = {};
	
	cin >> K;

	while (K--) {
		int largestGap = 0;

		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> score;
			cl[i] = score;
		}

		sort(cl, cl + N, greater<int>());

		for (int i = 0; i < N - 1; i++) {
			if (largestGap < cl[i] - cl[i+1]) {
				largestGap = cl[i] - cl[i+1];
			}
		}

		cout << "Class " << X << '\n';
		cout << "Max " << cl[0] << ", Min " << cl[N - 1] 
			<< ", Largest gap " << largestGap << '\n';
		X++;
 	}

	return 0;
}