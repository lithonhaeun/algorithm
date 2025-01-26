#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	int first, last, ballnumber;
	int* arr;

	cin >> N >> M;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < M; i++) {
		cin >> first >> last >> ballnumber;
		for (int j = first-1; j < last; j++) {
			arr[j] = ballnumber;
		}
	}
	for (int i = 0; i < N; i++) {
			cout << arr[i] << " ";
	}
}