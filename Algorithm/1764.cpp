#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

unordered_map<string, int> line;
vector<string> ha;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    string name;

    for (int i = 0; i < N; i++) {
        cin >> name;
        line[name]++;
    }
    
    for (int i = 0; i < M; i++) {
        cin >> name;
        if (line[name] == 1)
            ha.push_back(name);
    }

    sort(ha.begin(), ha.end());
    cout << ha.size() << "\n";
    for (string n : ha) {
        cout << n << "\n";
    }
}