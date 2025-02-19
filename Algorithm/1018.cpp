#include <iostream>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int max = 0;
	int num;
	int N, M;
	int** chess;

	cin >> N>> M;

	chess = new int*[N];
	for (int i = 0; i < N; i++) {
		chess[i] = new int[M];
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i <= N - 8; i++) {
		for(int j = 0 ;j<=M-8;j++)
			for(int k = i;k<)
	}

}