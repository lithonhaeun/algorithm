#include <iostream>
#include <algorithm>
using namespace std;

long long arr[301];
long long dp[301];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];

    if (N == 0) { cout << 0 << '\n'; return 0; }
    dp[0] = 0;
    dp[1] = arr[1];
    if (N >= 2) dp[2] = arr[1] + arr[2];

    for (int i = 3; i <= N; i++) {
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
    }

    cout << dp[N] << '\n';
    return 0;
}
