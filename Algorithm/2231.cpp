#include <iostream>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M = 0, number;
	int sum = 0;

	cin >> N;

   	for (int i = N / 1.7; i < N; i++) {
		number = i;
		sum = 0;
		while (number > 0) {
			sum += number % 10;
			number /= 10;
		}
		sum += i;
		if (sum == N)
		{
			M = i;
			break;
		}
	}
	cout<<M;
}
