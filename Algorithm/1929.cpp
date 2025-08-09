#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;
    vector<bool> map(N + 1, true);

    map[0] = false;
    map[1] = false;

    if (M <= 2&&N>=2)cout << 2 << "\n";
    for (int i = 3; i < N+1; i+=2) {

        if (map[i] && i >= M) cout << i << "\n";
        for (int j = i * i; j < N + 1; j += i) {
            if (map[j])
                map[j] = false;
        }
    }
}