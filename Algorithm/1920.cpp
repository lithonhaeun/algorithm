#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int, int> map;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if(map[num]==0)
			map[num]++;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		cout << map[num] << "\n";
	}
}