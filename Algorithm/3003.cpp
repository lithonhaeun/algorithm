#include <iostream>
#include<string>
using namespace std;

int main() {
	int arr[6] = {1,1,2,2,2,8};
	int n;
	for (int i = 0; i < 6; i++) {
		cin >> n;
		cout << arr[i]-n << " ";
	}
}
