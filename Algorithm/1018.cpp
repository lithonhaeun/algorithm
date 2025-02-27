#include <iostream>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int min = 64;
	int num = 0;
	int N, M;
	char** chess;
	int xy;
	char start;

	cin >> N>> M;

	chess = new char*[N];
	for (int i = 0; i < N; i++) {
		chess[i] = new char[M];
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			 //잘라서 놓은 체스판
			num = 0;
			start = chess[i][j];
			xy = (i + j) % 2;
			for (int k = i; k < i + 8; k++) {
				for (int h = j; h < j + 8; h++) {
					if (xy == ((k + h) % 2)) {
						if (chess[k][h] != start)
							num++;
					}
					else {
						if (chess[k][h] == start)
							num++;
					}
				}
			}
			if (min > num)
				min = num;
		}

		//스타트가 빌런인 경우
		for (int j = 0; j <= M - 8; j++) {
			//잘라서 놓은 체스판
			num = 0;
			start = (chess[i][j]=='W'?'B':'W');
			xy = (i + j) % 2;
			for (int k = i; k < i + 8; k++) {
				for (int h = j; h < j + 8; h++) {
					if (xy == ((k + h) % 2)) {
						if (chess[k][h] != start)
							num++;
					}
					else {
						if (chess[k][h] == start)
							num++;
					}
				}
			}
			if (min > num)
				min = num;
		}
	}
	cout << min;
}