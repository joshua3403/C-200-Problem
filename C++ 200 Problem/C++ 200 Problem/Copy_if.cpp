#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsOdd(int i)
{
	return (i % 2) == 1;
}

int main()
{
	vector<int> data1{ 1,2,3 };
	vector<int> data2{ 4,5,6 };
	vector<int> data3{ 7,8,9 };
	vector<int> result;

	copy_if(data1.begin(), data1.end(), back_inserter(result), IsOdd);
	copy_if(data2.begin(), data2.end(), back_inserter(result), [](int arg) {return arg < 5; });
	copy_if(data3.begin(), data3.end(), back_inserter(result), [](int arg) {return arg > 0; });

	cout << "== result ==" << endl;

	for (auto i : result)
		cout << i << ", ";

	return 0;
}

// copy_if 함수에는 인자가 4개 필요하다.
// 복사 대상 컨테이너의 시작점과 끝 위치, 요소를 추가할 컨테이너, 복사할 조건이다.