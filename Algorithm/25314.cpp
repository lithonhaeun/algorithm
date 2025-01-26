#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while ((N / 4) >= 1) {
		cout << "long ";
		N -= 4;
	}
	cout << "int";
}