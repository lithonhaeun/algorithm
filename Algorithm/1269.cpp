#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

unordered_map<int, int> line;
vector<int> total;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int num;

    for (int i = 0; i < N; i++) {
        cin >> num;
        line[num]=-2;
        total.push_back(num);
    }

    for (int i = 0; i < M; i++) {
        cin >> num;
        line[num]++;
        total.push_back(num);
    }

    int first_count = 0;

    for (int i = 0; i < total.size(); i++) {
        if (line[total[i]] != -1)
            first_count++;
    }
    cout << first_count;
}