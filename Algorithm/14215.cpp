#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int calculate(int& sum, int arr[3]) {
	cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 3; i++) {
		while ((arr[i] * 2) >= arr[0] + arr[1] + arr[2])
			arr[i]--;
		sum += arr[i];
	}
	return sum;
}

int main() {
	int arr[3];
	int sum = 0;
	
	cout<<calculate(sum, arr);
}