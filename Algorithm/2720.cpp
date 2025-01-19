#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int n;
	
	int Q = 0, D = 0, N = 0, P = 0;

	cin >> n;
	int* money = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> money[i];
	}
	for(int i = 0 ;i<n;i++)
	{
		Q = 0, D = 0, N = 0, P = 0;

		//각각 최대의 동전 개수 계산
		while (money[i] - 25 >= 0) {
			Q++;
			money[i] -= 25;
		}

		while (money[i] - 10 >= 0) {
			D++;
			money[i] -= 10;
		}
		while (money[i] - 5 >= 0) {
			N++;
			money[i] -= 5;
		}
		while (money[i] - 1 >= 0) {
			P++;
			money[i] -= 1;
		}

		cout << Q << " " << D << " " << N << " " << P << endl;
	}
}