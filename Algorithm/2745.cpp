#include <iostream>
#include<string>
#include<cmath>
using namespace std;

//���ĺ��� ���ڷ� �ٲٱ�
int charv(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else {
        return c - 'A' + 10;
    }
}
int main()
{
    string a;
    int n;
  
    cin >> a;
    cin >> n;
    int arr;
    long long sum = 0;
    
    //�迭�� �Էµȴ�� 10�������� ���

    for (int i = 0; i < a.size(); i++) {
        arr = charv(a[i]);
        sum += arr*pow(n, a.size() - i - 1);
    }
    cout << sum;
}