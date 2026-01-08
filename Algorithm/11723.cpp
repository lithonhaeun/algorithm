#include<iostream>
#include<string>
using namespace std;

int arr[21];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long num;
	cin >> num;
	string menu;
	int x;

	for (long long i = 0; i < num;i ++) {
		cin >> menu;
		if (menu == "add") {
			cin >> x;
			if (arr[x] == 0)
				arr[x]++;
		}
		else if (menu == "check") {
			cin >> x;
			cout << arr[x]<<"\n";
		}
		else if (menu == "remove") {
			cin >> x;
			if (arr[x] != 0)
				arr[x] = 0;
		}
		else if (menu == "toggle") {
			cin >> x;
			(arr[x] == 0 ? arr[x]++ : arr[x]--);
		}
		else if (menu == "all") {
			for (int i = 1; i < 21; i++) {
				arr[i] = 1;
			}
		}
		else if (menu == "empty") {
			for (int i = 1; i < 21; i++) {
				arr[i] = 0;
			}
		}
	}
}