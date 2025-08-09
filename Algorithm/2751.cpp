#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N); // 동적 배열 사용

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // 정렬

    // 한 번에 출력하기 위해 string 사용
    string output;
    for (int i = 0; i < N; i++) {
        output += to_string(arr[i]) + "\n";
    }

    cout << output; // 한 번에 출력

    return 0;
}
