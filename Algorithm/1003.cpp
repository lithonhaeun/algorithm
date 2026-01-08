#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int count_0, count_1;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int T, num;
    cin >> T;
    int dp0[41], dp1[41];
    dp0[0] = 1; dp1[0] = 0;
    dp0[1] = 0; dp1[1] = 1;

    for (int i = 2; i < 41; i++) {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }
    
    for (int i = 0; i < T; i++) {
        cin >> num;

        cout << dp0[num]<< " " << dp1[num] <<"\n";
    }
}