#include<iostream>
#include<vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int arr[100000];
	int size = -1;
	int N; cin >> N;

	int x;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 0) {
			size--;
		}
		else
		{
			size++;
			arr[size] = x;
		}
	}
	int sum = 0;
	for (int i = 0; i <= size; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
}