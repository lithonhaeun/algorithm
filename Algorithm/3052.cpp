#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int arr[42] = { 0 };
	int sum = 0;
	
	for (int i = 0; i < 10; i++) {
		cin >> N;
		arr[N % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0)
			sum++;
	}
	cout << sum;
}