#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	int total = 1;
	for (int i = 1; i <= N; i++) {
		total *= i;
	}
	cout << total;
}