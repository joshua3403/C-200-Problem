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
	vector<int> data1{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	vector<int> data2;

	partition(data1.begin(), data1.end(), IsOdd);

	for (int x : data1)
		cout << x << ", ";

	cout << endl;

	auto result = partition_point(data1.begin(), data1.end(), IsOdd);

	data2.assign(data1.begin(), result);

	for (int x : data2)
		cout << x << ", ";

	return 0;
}

// partition 함수는 분리할 컨테이너 영역의 시작, 끝 위치를 인자로 받는다.
// 그리고 분리할 조건까지 세 가지를 받는데, 해당 조건에 합당한 위치를 찾으면 순회 방향이 거꾸로 바뀐다.