#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

unordered_map<string,int> total;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string arr;
    cin >> arr;

    for (int i = 0; i < arr.size(); i++) {
        string tmp = "";
        for (int j = i; j< arr.size(); j++) {
            tmp += arr[j];
            total[tmp]++;
        }
    }
    
    cout << total.size();
}