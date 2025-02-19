#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int arr[9][9];
	int max = -1;
	int maxhang = 0, maxyul = 0;//Çà°ú ¿­;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				maxhang = i;
				maxyul = j;
			}
		}
	}

	cout << max << endl << maxhang + 1 << " " << maxyul + 1;
}
