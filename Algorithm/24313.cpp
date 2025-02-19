#include <iostream>
using namespace std;

int main() {
    long long a1,a0,c,n;
    cin >> a1>>a0>>c>>n;

    if (a1 * n + a0 <= c * n) {
        if (a1 < c)
            cout << 1;
        else if (a1 == c && a0 < 0)
            cout << 1;
        else
            cout << 0;
    }
    else
        cout << 0;
}