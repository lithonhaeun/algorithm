#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
 
unordered_map<int, int> line;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N;

    int num;

    for (int i = 0; i < N; i++) {
        cin >> num;
        line[num]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << line[num]<<" ";
    }
}