#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

vector<string> arr;
unordered_map<string, int> v;

void sort(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size - i; j++) {
			if (v[arr[j - 1]] < v[arr[j]])
			{
				string tmp = arr[j-1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			else if (arr[j - 1].size() < arr[j].size()) {
				string tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			else if (arr[j - 1] > arr[j]) {
				string tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, max;
	string word;

	cin >> N >> max;
	for (int i = 0; i < N; i++) {
		cin >> word;
		if (word.size() >= max) {
			v[word]++;
			if (v[word] == 1)
				arr.push_back(word);
		}
	}

	sort(arr.size());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}
}