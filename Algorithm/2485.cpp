#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> trees(N);
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }

    // 오름차순 정렬 (안 되어 있을 경우를 대비)
    sort(trees.begin(), trees.end());

    // 인접한 간격들
    int road = trees[1] - trees[0];
    for (int i = 2; i < N; i++) {
        road = gcd(road, trees[i] - trees[i - 1]);
    }

    // 전체 구간 길이 / 간격 = 총 나무 자리 수
    int total = (trees[N - 1] - trees[0]) / road + 1;
    int result = total - N;

    cout << result << "\n";
}