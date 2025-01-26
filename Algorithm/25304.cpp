#include <iostream>
using namespace std;

int main() {
	int X;
	int N;
	cin >> X >> N;
	int objectprice, objectnum;
	int total = 0;
	for (int i = 0; i < N; i++) {
		cin >> objectprice >> objectnum;
		total += objectnum * objectprice;
	}

	if (X == total)
		cout << "Yes";
	else
		cout << "No";
}