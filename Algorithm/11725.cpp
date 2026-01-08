#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>parent;
vector<vector<int>> graph;

void bfs(int root) {
	queue<int> q;
	q.push(root);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int next : graph[cur]) {
			if (parent[next] == 0)
			{
				parent[next] = cur;
				q.push(next);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;

	graph.resize(N + 1);
	parent.resize(N + 1, 0);

	for (int i = 0; i < N - 1; i++) {
		int num, num1;
		cin >> num >> num1;
		graph[num].push_back(num1);
		graph[num1].push_back(num);
	}

	bfs(1);

	for (int i = 2; i <= N; i++) {
		cout << parent[i] << "\n";
	}
}