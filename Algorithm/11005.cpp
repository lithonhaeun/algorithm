#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// ���ڸ� ���ĺ����� �ٲٱ�
char change(int v) {
	if (v > 9)
		return 'A'+(v-10);
	else
		return v+'0';

}

//��� ������ �������� ������� �˻�
//�������� ������ 0�� ����
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

	//�迭�� �Էµȴ�� 10�������� ���

	charv(v, a, n);
	for (int i = 0; i < v.size(); i++) {
		cout << change(v[v.size()-i-1]);
	}
}