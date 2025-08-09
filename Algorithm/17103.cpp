#include<iostream>
#include<vector>
using namespace std;

int main() {
	int max = 1000001;
	vector<bool> map(max, true);

	map[1] = false;
	map[0] = false;

	for (long long i = 2; i * i <= max; i++) {
		if (map[i])
		{
			for (long long j = 1LL * i * i; j < max; j += i) {
				if (map[j])
					map[j] = false;
			}
		}
	}
	int num, N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;

		int total = 0;

		for (int i = 2; i <= num / 2; i++) {

			if (map[i] && map[num - i])
				total++;
		}
		cout << total << "\n";
	}
}