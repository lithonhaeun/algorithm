#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> input(N);
    vector<int> sorted;

    for (int i = 0; i < N; ++i) {
        cin >> input[i];
        sorted.push_back(input[i]);
    }

    // 중복 제거 + 정렬
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    // 값 → 압축된 값 매핑
    map<int, int> compress;
    for (int i = 0; i < sorted.size(); ++i) {
        compress[sorted[i]] = i;
    }

    for (int i = 0; i < N; ++i) {
        cout << compress[input[i]] << " ";
    }

    return 0;
}
