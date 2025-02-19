#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	string arr[5];
	int max = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i].size() > max)
			max = arr[i].size();
	}

	for (int j = 0; j < max; j++) {
		for (int i = 0; i < 5; i++) // i = 2, 
		{
			if (j < arr[i].size())
				cout << arr[i][j];
		}
	}
}