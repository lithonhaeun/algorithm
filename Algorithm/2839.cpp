#include <iostream>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int min = 3000;
	int bag;
	int N;
	int first;

	cin >> N;
	first = N;

	for (int i = 0; i <= first / 3; i++) {
		
		N -= i * 3;
		bag = i;
		while (N - 5 >= 0) {
			bag++;
			N -= 5;
		}

		if ((min > bag) && N == 0)
			min = bag;
		N = first;
	}
	if (min == 3000)
		cout << -1;
	else
		cout << min;
}