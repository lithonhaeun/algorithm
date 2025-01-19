#include <iostream>

using namespace std;

bool isFirst;
// bool은 초기화하지 않고 전역으로 선언할 경우, 컴파일 당시 false로 값이 들어가
// int 또한 초기화하지 않고 전역으로 선언할 경우, -1이라는 값으로 들어가

bool isDecimal(int num) { // i가 소수인지 아닌지 
	for (int i = 2; i < num; i++)  // 소수를 찾기해 2부터 num까지 순회 1번
		if (num % i == 0)
			return false; // 2부터 num - 1까지 수 중에서 나누어지는 값이 있으면 소수가 아닙니다!
	return true;
}

// 논리로 문제를 이해 -> 주석으로 구조화 -> 코드로 구현
// 어떻게 구현하지? -> 연속적인 값이 있어? 그럼 배열. 이런 데이터 위주의 사고방식이 되버리는거야
// 최적의 알고리즘을 구해야 하는 것, 데이터에 묶일 필요가 없어.
// 벡터를 안써서 메모리 공간을 덜 사용했어
// 시간적으로 다시 순회를 하지 않으니 더 빨라졌어

int main() {
	int begin, end;
	cin >> begin >> end;
	int sum{ 0 }, min;

	for (int i = begin; i <= end; i++) {
		if (isDecimal(i)) {// i가 소수인지 아닌지 
			// sum에다가 더해줘야해
			// 대신 첫번째로 찾은 경우 이 값은 min에 저장해야돼

			sum += i;
			if (!isFirst) {// 첫번째인지 아닌지, 비교연산보다 NOT연산이 더 빨라
				min = i;
				isFirst = true;
			}
		}
	}

	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n" << min;
	}
}

// 벡터의 특성이 길이 가변형 배열, 뒤에 원소가 들어오면 배열을 새로 할당해

// 1, 2, 3, 4 이미 길이가 4로 고정되어 있는 배열
// 길이가 두 배인, 즉 8인 새로운 배열 하나 만들어서 0번째부터 3번째까지 1234 복사한 다음 추가로 넣을려는 요소를 4번째 칸에 넣어
// 1,2,4,8
// 1, 10000, 소수가 500
// 1 2 4 8 16 32 64 128 256, 512

//#include <iostream>
//#include<string>
//#include<cmath>
//#include<vector>
//using namespace std;
//
////소수를 찾아 벡터에 넣어주는 함수
//void find(vector<int>& v, int num) {
//	v.push_back(num);
//	for (int i = 2; i < num; i++) { // 소수를 찾기해 2부터 num까지 순회 1번
//		if (num % i == 0)
//		{
//			v.pop_back();
//			break;
//		}
//	}
//}
//
//int main() {
//	int begin, end;
//	cin >> begin >> end;
//	vector<int> v;
//	for (int i = begin; i <= end; i++) {
//		if (i != 1)
//			find(v, i);
//	} // (begin부터 end까지 순회 1번) * (소수를 찾기해 2부터 num까지 순회 1번)
//	int sum = 0;
//	if (v.size() == 0)
//		cout << -1 << endl;
//
//	else
//	{
//		for (int i = 0; i < v.size(); i++) // begin부터 end까지 있는 소수들 순회 1번
//		{
//			sum += v[i];
//		}
//		cout << sum << endl << v[0];
//	}
//}