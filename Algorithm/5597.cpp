#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int student[30] = { 0 };
	for (int i = 0; i < 28; i++) {
		cin >> N;
		student[N-1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (student[i] == 0)
			cout << i + 1 << "\n";
	}
}