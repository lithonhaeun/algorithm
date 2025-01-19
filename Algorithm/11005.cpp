#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// 숫자를 알파벳으로 바꾸기
char change(int v) {
	if (v > 9)
		return 'A'+(v-10);
	else
		return v+'0';

}

//계속 나누어 나머지가 생기는지 검사
//나머지가 없으면 0을 저장
void charv(vector<int>& v, int c, int n) {
	while ( c>=1 ) {
		if (c % n == 0)
		{
			v.push_back(0);
			c /= n;
		}
		else
		{
			v.push_back(c % n);
			c /= n;
		}
	}
}
int main()
{
	int a;
	int n;
	vector<int> v;

	cin >> a;
	cin >> n;

	//배열에 입력된대로 10진법으로 계산

	charv(v, a, n);
	for (int i = 0; i < v.size(); i++) {
		cout << change(v[v.size()-i-1]);
	}
}