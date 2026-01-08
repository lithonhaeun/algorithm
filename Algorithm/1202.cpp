#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct jewel {
	long long weight;
	long long price;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int jewel_num, bag_num;
	int jewel_weight, price;
	long long bag_max_weight;
	cin >> jewel_num >> bag_num;

	vector<jewel> jewels(jewel_num);
	for (int i = 0; i < jewel_num; i++) {
		cin >> jewels[i].weight >> jewels[i].price;
	}

	vector<long long> bags(bag_num);
	for (int i = 0; i < bag_num; i++) {
		cin >> bags[i];
	}

	sort(jewels.begin(), jewels.end(), [](auto& a, auto& b) {
		return a.weight < b.weight;
		});

	priority_queue<long long> pq;
	sort(bags.begin(), bags.end());

	long long total = 0;
	int idx = 0;

	for (int i = 0; i < bag_num; i++) {
		while (idx < jewel_num && jewels[idx].weight <= bags[i]) {
			pq.push(jewels[idx].price);
			idx++;
		}
		if (!pq.empty()) {
			total += pq.top();
			pq.pop();
		}
	}
	cout << total << "\n";
}