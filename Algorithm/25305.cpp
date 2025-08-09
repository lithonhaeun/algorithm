#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int k;
    int array[1000] = { 0 };

    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    sort(array,array + N);

    cout << array[N-k];
}