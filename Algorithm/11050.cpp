#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int total = 1;
	int total_2 = 1;
	for (int i = 1; i <= M; i++) {
		total_2 *= i;
	}
	for (int i = N; i > N - M; i--) {
		total *= i;
	}
		cout << total/(total_2);
}