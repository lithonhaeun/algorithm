#include <iostream>
#include<string>
using namespace std;

int main() {
	int N;
	string number;
	int sum = 0;
	cin >> N;
	cin >> number;
	for (int i = 0; i < N; i++) {
		
		sum += number[i]-48;
	}
	cout << sum;
}