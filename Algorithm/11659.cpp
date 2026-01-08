#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int* arr_sum;
	int* arr;
	long long N, M;
	cin >> N>> M;
	int num_first, num_last;

	arr = new int[N];
	arr_sum = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num_first;
		if (i == 0)
		{
			arr[i] = num_first;
			arr_sum[i] = num_first;
		}
		else
		{
			arr_sum[i] = num_first + arr_sum[i - 1];
			arr[i] = num_first;
		}
	}

	for (int i = 0; i < M; i++) {
		cin >> num_first >> num_last;
		cout << arr_sum[num_last-1] - arr_sum[num_first-1]+arr[num_first-1] << "\n";
	}
}