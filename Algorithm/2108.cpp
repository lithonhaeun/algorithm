#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<cmath>
using namespace std;

vector<int> arr;
unordered_map<int, int> bin;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N, num, max = 0;
	double mean = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
		mean += num;
	}

	cout << (int)round(mean / N) << "\n";

	sort(arr.begin(), arr.end());

	if (N % 2 == 1)
		cout << arr[N / 2] << "\n";
	else
		cout << (arr[N / 2] + arr[N / 2 + 1]) / 2 << "\n";

	//ÃÖºó°ª
	bool change;
	int max_num = 0;
	for (int i = 0; i < N; i++) {
		bin[arr[i]]++;
		if (bin[arr[i]] > max_num)
		{
			max = arr[i];
			max_num = bin[arr[i]];
			change = true;
		}
		else if (bin[arr[i]] == max_num && change) {
			max = arr[i];
			max_num = bin[arr[i]];
			change = false;
		}
	}
	cout << max << "\n";
	cout << arr[arr.size() - 1] - arr[0];
}