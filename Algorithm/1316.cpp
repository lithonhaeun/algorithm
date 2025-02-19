#include <iostream>
#include<string>
using namespace std;


//항상 이중문할때는 i와 j 구별 잘하기
//항상 배열 이중문으로 돌릴때는 초기화 하기!!!!
int main() {
	int N;
	string word;
	
	int groupnumber=0;
	bool groupcheck;
	int changeintoword;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int arr[26] = {0};
		groupcheck = true;
		cin >> word;
		for (int j = 0; j < word.size(); j++) {
			changeintoword = word[j] - 'a';
			if (arr[changeintoword] == 0)
				arr[changeintoword] = 1;
			else if (arr[changeintoword] == 1) {
				if (j>0&&word[j - 1] != word[j])
				{
					groupcheck = false;
					break;
				}
			}
		}
		if(groupcheck==true)
			++groupnumber;
		
	}
	cout << groupnumber;
}