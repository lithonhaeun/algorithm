#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << (n * (n - 1)) / 2 << endl; // 코드1의 수행 횟수
    cout << 2 << endl; // 다항식의 최고차항 차수

    return 0;
}