#include <iostream>
using namespace std;

int main() {
	int max = -1;
	int num[6] = {0};
	int n;
	
	for (int i = 0; i < 3; i++) {
		cin >> n;
		num[n]++;
	}
	for (int i = 6; i > 0; i--) {
		if (num[i] == 3)
		{
			cout << num[i] * 1000 + 10000;
			break;
		}

		else if (num[i] == 2)
		{
			cout << num[i] * 100 + 1000;
			break;
		}
	}
}