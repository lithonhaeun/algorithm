#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> poketmon;
    unordered_map<string, int> poketmon_to_idx;
    string name;
    int N, M;
    cin >> N >> M;


    for (int i = 0; i < N; i++) {
        cin >> name;
        poketmon.push_back(name);
        poketmon_to_idx[name] = i+1;
    }

    for (int i = 0; i < M; i++) {
        cin>> name;
        if (name[0] >= '0' && name[0] <= '9') {
            int idx = stoi(name);
            cout << poketmon[idx - 1] << "\n";
        }
        else {
            cout<<poketmon_to_idx[name] << "\n";
        }
    }
}