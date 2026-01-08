#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, num;
	cin >> T;
	arr[1] = 0;

	for (long long i = 2; i < 1000001; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[T];
}