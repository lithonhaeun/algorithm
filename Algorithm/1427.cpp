#include <iostream>
#include <string>
#include<vector>
using namespace std;


template pair<int, string>;

bool compare(pair<int, string>& a, pair<int, string>& b) {
	return a.first > b.first;
}

void sort(pair<int, string> a[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i - j - 1; j++) {
			if (compare(a[j], a[j + 1]));
			{
				int a = a;
			}
		}
	}
}

int main()
{
	string name;
	int N;
	int num;
	
	
	cin >> N;
	
	vector <pair<int, string>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v);

	for (int i = 9; i >=0; i--) {
		cout << v[i].first << " " << v[i].second;

	}
}