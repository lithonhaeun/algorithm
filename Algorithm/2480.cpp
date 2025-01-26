#include <iostream>
using namespace std;

int main() {
	int n1, n2,n3;

	cin >> n1 >> n2 >> n3;
	
	if (n1 == n2 && n2 == n3)
		cout << 10000 + 1000 * n1;
	else if(n1==n2||n1==n3)
		cout << 1000 + 100 * n1;
	else if(n2 == n3)
		cout<< 1000 + 100 * n2;
	else
	{
		if (n1 > n2) {
			if (n1 > n3)
				cout << 100 * n1;
			else
				cout << 100 * n3;
		}
		else {
			if (n2 > n3)
				cout << 100 * n2;
			else
				cout << 100 * n3;
		}

	}
}