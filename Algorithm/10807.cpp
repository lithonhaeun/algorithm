#include <iostream>
using namespace std;

int main() {
	int n;
	int* arr;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int num;
	int sum=0;
	cin >> num;
	for (int i = 0; i < n; i++) {
		if (num == arr[i])
			sum++;
	}
	cout << sum;
}