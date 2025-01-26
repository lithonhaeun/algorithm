#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int n;
	int max = -1000000, min = 1000000;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n < min)
			min = n;
		if (n > max)
			max = n;
	}
	cout << min << " " << max;
}