#include <iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int T;
	int n;

	cin >> T;
	for (int i = 0; i < T; i++) {
		string result = "";
		cin >> n >> word;
		for (int j = 0; j < word.size(); j++) {
			result += string(n,word[j]);  //string(n,c)�� c�� n�� �ݺ��Ѵٴ� ��
		}
		cout << result<<"\n";
	}
}