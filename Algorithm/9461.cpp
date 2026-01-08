#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long arr[101];
	int N; cin >> N;
	int num;
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	for (long i = 3; i < 101; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		cout << arr[num-1]<<"\n";
	}
}