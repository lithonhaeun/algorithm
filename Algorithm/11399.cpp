#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int total=0;
	int num;
	
	cin >> num;
	vector<int> time(num);
	for (int i = 0; i < num; i++) {
		cin >> time[i];
	}
	sort(time.begin(), time.end());
	for (int i = 0; i < num; i++) {
		total += time[i] * (num - i);
	}
	cout << total;
}