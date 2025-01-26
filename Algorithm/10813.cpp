#include <iostream>
using namespace std;

int main() {
	int N, M;
	int changA, changB;
	int sum;
	int* arr;

	cin >> N >> M;
	arr = new int[N];
	for (int i = 0; i < N; i++) {
		arr[i] = i+1;
	}
	for (int i = 0; i < M; i++) {
		cin >> changA >> changB;
		sum = arr[changA - 1];
		arr[changA - 1] = arr[changB - 1];
		arr[changB - 1] = sum;
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}