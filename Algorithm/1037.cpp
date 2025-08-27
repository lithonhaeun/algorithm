#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> num(N);

	int max = 0;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());
	cout << num[0] * num[N - 1];

}