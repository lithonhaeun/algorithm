#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	double max = 0, sum = 0;
	int* arr;
	
	cin >> N;
	arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < N; i++) {
		sum += arr[i] / max * 100;
	}
	cout << sum/N;
}