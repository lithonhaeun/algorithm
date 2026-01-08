#include <iostream>
#include <cmath>

using namespace std;

int N, r, c;
int ans = 0;

void solve(int x, int y, int n) {
    if (n == 0) {
        cout << ans;
        return;
    }

    int half = pow(2,n - 1);
    int size = half * half; 

    if (r < x + half && c < y + half) {
        solve(x, y, n - 1);
    }
    else if (r < x + half && c >= y + half) {
        // 2사분면
        ans += size;
        solve(x, y + half, n - 1);
    }
    else if (r >= x + half && c < y + half) {
        // 3사분면
        ans += size * 2;
        solve(x + half, y, n - 1);
    }
    else {
        // 4사분면
        ans += size * 3;
        solve(x + half, y + half, n - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> r >> c;
    solve(0, 0, N);
}