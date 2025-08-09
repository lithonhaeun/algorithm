#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int x, y;
	int N;

	cin >> N;
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ y, x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}
}