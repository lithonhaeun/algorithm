#include <iostream>
#include <string>

using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	string max;
	for (int i = 2; i >= 0; i--) {

		if (A[i] > B[i])
		{
			max = A;
			break;
		}
		else if (A[i] < B[i])
		{
			max = B;
			break;
		}

	}
	cout << max[2] << max[1] << max[0];
}
