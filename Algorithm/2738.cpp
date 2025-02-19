#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M, number;
	cin >> N >> M;

	int* arr = new int[N * M];  // 1차원 배열을 2차원처럼 사용

	for (int i = 0; i < N * M; i++)
		cin >> arr[i];

	for (int i = 0; i < N * M; i++) {
		cin >> number;
		cout << arr[i]+number << " ";
		if ((i + 1) % M == 0) cout << "\n";
	}

	delete[] arr;
	return 0;
}
