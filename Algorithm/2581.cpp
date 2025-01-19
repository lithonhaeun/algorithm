#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

//소수를 찾아 벡터에 넣어주는 함수
void find(vector<int>& v, int num) {
	v.push_back(num);
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
		{
			v.pop_back();
			i += num;
		}
	}
}

int main() {
	int begin, end;
	cin >> begin >> end;
	vector<int> v;
	for (int i = begin; i <= end; i++) {
		if (i != 1)
			find(v, i);
	}
	int sum = 0;
	if (v.size() == 0)
		cout << -1 << endl;

	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
		}
		cout << sum << endl << v[0];
	}
}