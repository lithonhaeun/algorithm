#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> meetings(N);
    for (int i = 0; i < N; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }
    sort(meetings.begin(), meetings.end(), [](auto& a, auto& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
        });

    int count = 0;
    int endTime = 0;

    for (auto& m : meetings) {
        if (m.first >= endTime) {
            endTime = m.second;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
