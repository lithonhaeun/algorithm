#include <iostream>
#include<string>
using namespace std;


//�׻� ���߹��Ҷ��� i�� j ���� ���ϱ�
//�׻� �迭 ���߹����� �������� �ʱ�ȭ �ϱ�!!!!
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