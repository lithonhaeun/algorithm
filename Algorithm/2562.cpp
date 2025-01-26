#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int max = 0;
	int numi = 0;
	for (int i = 1; i < 10; i++) {
		cin >> N;
		if (N > max)
		{
			max = N;
			numi = i;
		}
	}
	cout << max << "\n" << numi;
}