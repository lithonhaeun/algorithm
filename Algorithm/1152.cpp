#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str); // ���ڿ� �Է�

    if (str.empty()) { // �� ���ڿ� ó��
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        // �ܾ��� ������ ����
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

