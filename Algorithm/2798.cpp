#include <iostream>
using namespace std;

int sum(int card0, int card1, int card2) {
	return card0 + card1 + card2;
}
int main() {
	int N, M, bestsum=0,*card;

	cin >> N >> M;
	card = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(i!=j)
			{
				for (int h = 0; h < N; h++) {
					if (j != h&&i!=h) {
						if(sum(card[i], card[j], card[h])<=M){
							if (bestsum < sum(card[i], card[j], card[h]))
								bestsum = sum(card[i], card[j], card[h]);
							if (bestsum == M)
								break;
						}
					}
				}
			}
		}
	}
	cout << bestsum;
}
