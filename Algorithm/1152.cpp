#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str); // 문자열 입력

    if (str.empty()) { // 빈 문자열 처리
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        // 단어의 시작을 감지
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

