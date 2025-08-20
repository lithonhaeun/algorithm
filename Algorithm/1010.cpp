#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int T; cin >> T;
	for (int j = 0; j < T; j++) {
		double N, M;
		cin >> N >> M;
		long long total = 1;
		long long total_1=1;

		int big = M - N;
		int small = N;
		if (M - N < N) {
			small = M - N;
			big = N;
		}
		for (int i = M; i > big;i--) {
			total *= i;
		}
		for (int i = 1; i <= small; i++) {
			total_1 *= i;
		}
		cout << total / total_1<<"\n";
	}
}