#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	long long K,A;
	cin >> N >> K;
	long long total = 0;

	vector<int> q(N);
	for (int i= 0; i < N; i++) {
		cin >> q[i];
	}
	int idx = N;
	while (K != 0) {
		if ((K / q[N - 1]) > 0)
		{
			total += K / q[N - 1];
			K %= q[N - 1];
		}
		else
			N--;
	}
	cout << total;
}