#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	cin >> N;

	unordered_set<string> s;
	string str, en_or_le;

	for (int i = 0; i < N; i++) {
		cin >> str>>en_or_le;
		if (en_or_le == "enter")
			s.insert(str);
		else
			s.erase(str);
	}

	vector<string> result(s.begin(), s.end());
	sort(result.rbegin(), result.rend());

	for (string name :result) {
		cout << name << "\n";
	}
}