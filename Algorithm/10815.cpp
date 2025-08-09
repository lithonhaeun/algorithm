#include<iostream>
using namespace std;

int arr[10000001];
int arr_minus[10000000];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int sangn_num;

	cin >> sangn_num;
	for (int i = 0; i < sangn_num; i++) {
		int N;
		cin >> N;
		if (N < 0)
			arr_minus[-N - 1] = 1;
		else
			arr[N] = 1;
	}
	cin >> sangn_num;
	for (int i = 0; i < sangn_num; i++) {
		int N;
		cin >> N;
		if (N < 0)
		{
			cout << ((arr_minus[-N - 1] == 1) ? 1 : 0) << " ";
		}
		else
		{
			cout << ((arr[N] == 1) ? 1 : 0) << " ";
		}
	}
}