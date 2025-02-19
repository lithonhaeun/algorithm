#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int canvas[100][100];

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int paper; cin >> paper;
	int total = 0;

	for (int i = 0; i < paper; i++) {
		int x, y;

		cin >> x >> y;


		for (int x_start = x; x_start < x + 10; x_start++) {
			for (int y_start = y; y_start < y + 10; y_start++) {
				canvas[y_start - 1][x_start - 1]++;
			}
		}
	} // 대략 10000번의 연산

	// 대략 10000번의 연산

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
		{
			if (canvas[i][j] != 0)
				total++;
		}
	}
	cout << total;
}
