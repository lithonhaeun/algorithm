#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;



int main() {
	int n;
	int num;
	cin >> n;
	int k = n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 1)
		{
			k--;
		}
		else
		{
			for (int j = 2; j < num; j++) {
				if (num % j == 0)
				{
					k--;
					j += num;
				}
			}
		}
	}
	cout << k;
}