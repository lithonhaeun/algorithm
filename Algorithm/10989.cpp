#include <iostream>

using namespace std;

const int MAX_NUM = 10000; // 수의 범위 (1 ~ 10,000)
int countArr[MAX_NUM + 1] = { 0 }; // 등장 횟수를 저장할 배열

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, num;
    cin >> N;

    // 입력값을 count 배열에 저장
    for (int i = 0; i < N; i++) {
        cin >> num;
        countArr[num]++; // 해당 숫자의 등장 횟수 증가
    }

    // 정렬된 결과 출력
    for (int i = 1; i <= MAX_NUM; i++) {
        while (countArr[i]--) { // 등장 횟수만큼 반복 출력
            cout << i << "\n";
        }
    }

    return 0;
}
