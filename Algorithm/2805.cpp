#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> tree_arr;
int main() {
	int tree, home;
	cin >> tree >> home;
	int hight;

	tree_arr.resize(tree);
	for (int i = 0; i < tree; i++) {
		cin >> tree_arr[i];
	}

	sort(tree_arr.begin(), tree_arr.end());

	int left = 0, right = tree_arr[tree-1];
	int total=0;
	int result = 0;
	while (left<=right) {
		total = 0;
		hight = (left + right) / 2;
		for (int i = 0; i < tree; i++) {
			if (tree_arr[i] > hight) {
				total += tree_arr[i] - hight;
			}
		}
		if (total >= home) {
			result = hight;
			left = hight + 1;
		}
		else {
			right = hight - 1;
		}
	}
	cout << result;
}