#include<iostream>
#include<vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	vector<int> arr;
	int x;

	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 1) {
			cin >> x;
			arr.push_back(x);
		}
		else if (x == 2) {
			if (arr.size() == 0)
				cout << -1 << "\n";
			else {
				cout << arr.back() << "\n";
				arr.pop_back();

			}
		}
		else if (x == 3) {
			cout << arr.size() << "\n";
		}
		else if (x == 4) {
			cout << (arr.size() == 0 ? 1 : 0) << "\n";
		}
		else if (x == 5) {
			if (arr.size() == 0)
				cout << -1 << "\n";
			else
				cout << arr.back() << "\n";
		}
	}
}