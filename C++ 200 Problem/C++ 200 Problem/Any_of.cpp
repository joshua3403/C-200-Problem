#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool EvenOdd(int arg)
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	vector<int> data = { 8, 27, 35, 49 };

	if (any_of(data.begin(), data.end(), EvenOdd))
		cout << "data : 짝수가 존재합니다." << endl;

	if (any_of(data.begin(), data.end(), [](int i) {return i < 10; }))
		cout << "data : 10보다 작은 수가 있습니다." << endl;

	return 0;
}

// any_of 함수는 all_of 함수와 사용 방법은 비슷하지만 의미는 다르다.
// any_of 함수는 컨테이너 요소 중 하나라도 조건에 맞다면 true를 리턴한다.