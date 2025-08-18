#include<iostream>
#include<deque>
using namespace std;

deque<pair<int, int>> arr;

int main() {
	int N;
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(pair<int,int>(i+1,num));
	}
	for (int i = 0; i < N; i++) {
		int idx = arr[0].second;
		cout << arr.front().first << " ";

		arr.pop_front();
		if (arr.size() == 0)
			return 0;
		else if (idx > 0) {
			for (int j = 1; j < idx; j++) {
				arr.push_back(arr.front());
				arr.pop_front();
			}
		}
		else {
			for (int j = 0; j < (-idx); j++) {
				arr.push_front(arr.back());
				arr.pop_back();
			}
		}
	}
}