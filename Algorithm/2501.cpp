#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>> v;
	vector<int> k;

	int n;
	int num = 1;

	//이중 배열로 약수 입력받음
	cin >> n;
	while (n != -1) {
		vector<int> arr;
		cin >> n;
		k.push_back(n);
		for (int i = 1; i <= n; i++) {
			if (n % i == 0)
			{
				arr.push_back(i);
			}
		}
		v.push_back(arr);
		cin >> n;
	}

	
	for (int i = 0; i < v.size(); i++) {
		int sum = 0;
		for (int j = 0; j < v[i].size(); j++) {
			sum += v[i][j];
		}
		if (sum == k[i]) {
			cout << sum << " = ";
			for (int w = 0; w < v[i].size(); w++)
				cout << v[i][w] << " + ";
			cout << endl;
		}
		else
			cout << k[i] << " is NOT perfect." << endl;
	}
}