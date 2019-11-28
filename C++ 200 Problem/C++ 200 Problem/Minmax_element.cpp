#include "pch.h"
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int, 5> data{ 5,9,4,1,7 };

	auto result1 = minmax_element(data.begin(), data.end());

	cout << "최소값 : " << *result1.first;
	cout << ", 위치 : " << (result1.first - data.begin()) << '\n';
	cout << "최대값 : " << *result1.second;
	cout << ", 위치 : " << (result1.second - data.begin()) << '\n';

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) {return arg1 < arg2; });

	cout << "최소값 : " << *result2.first;
	cout << ", 위치 : " << (result2.first - data.begin()) << '\n';
	cout << "최대값 : " << *result2.second;
	cout << ", 위치 : " << (result2.second - data.begin()) << '\n';

	return 0;
}

// 정렬되지 않은 컨테이너의 일부 영역에서 최소값과 최대값을 확인할 때는 minmax_element 함수를 사용하자.