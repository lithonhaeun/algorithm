#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> type(N);
    for (int i = 0; i < N; i++) cin >> type[i];

    deque<int> dq;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        if (type[i] == 0) dq.push_front(x); // 큐인 경우만 저장
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int x; cin >> x;
        dq.push_back(x);          // 새 값 뒤에 추가
        cout << dq.front() << " "; // 맨 앞 출력
        dq.pop_front();           // 맨 앞 제거
    }
}
