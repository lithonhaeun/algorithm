#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> child;
vector<bool> virus;
vector<bool> twice;
queue<int> q;
int total = 0;
void dfp() {
	while (!q.empty()) {
		int cur = q.front();
		if (virus[cur]&&!twice[cur])
		{
			for (int children : child[cur]) {
				virus[children] = true;
				q.push(children);
				twice[cur] = true;
			}
		}
		q.pop();
	}
}

int main() {
	int computer_num;
	int couple_num;
	cin >> computer_num >> couple_num;
	int num, num1;

	child.resize(computer_num + 1);
	virus.resize(computer_num + 1);
	twice.resize(computer_num + 1);
	virus[1] = true;
	for (int i = 0; i < couple_num; i++) {
		cin >> num >> num1;
		child[num].push_back(num1);
		child[num1].push_back(num);
	}

	q.push(1);
	dfp();

	for (bool check : virus) {
		if (check)
			total++;
	}
	cout << total-1;
}