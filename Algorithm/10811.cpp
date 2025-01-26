#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	int changefirst, changelast;
	int* arr;
	int k,h;

	cin >> N >> M;
	arr = new int[N+1];
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> changefirst >> changelast;
		h = changelast;
		for (int j = changefirst; j < changelast; j++) {
			k = arr[j];
			arr[j] = arr[h + changefirst - j];
			arr[h + changefirst - j] = k;
			changelast--;
		}
	}
	for (int i = 1; i < N+1; i++) {
		cout << arr[i] <<" ";
	}
}