#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int arr[11];

void setting() {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
}

int main() {
	int N; cin >> N;

	int num;
	setting();
	for (int i = 0; i < N; i++) {
		cin >> num;
		cout << arr[num]<<"\n";
	}
}