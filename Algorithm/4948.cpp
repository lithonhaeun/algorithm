#include<iostream>
#include<vector>
using namespace std;

int main() {
	int max = 250000;
	vector<bool> map(max, true);

	map[1] = false;
	map[0] = false;
	
	for (int i = 3; i < 250000; i += 2) {
		for (long long j = 1LL* i* i; j < 250000; j += i) {
			if (map[j])
				map[j] = false;
		}
	}
	int num;
	cin >> num;
	while (num != 0) {
		int total = 0;
		
		if (num == 1) {
			total++;
		}
		for (int i = num+1; i <= num*2; i++) {
			if (map[i]&&i%2!=0)
				total++;
		}
		cout << total << "\n";
		cin >> num;
	}
}