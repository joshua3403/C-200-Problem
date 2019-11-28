#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> result;

	copy_n(data, sizeof(data), back_inserter(result));

	cout << "== result ==" << endl;
	for (auto i : result)
		cout << i << ", ";

	return 0;
}

// 배열의 전체가 아닌 일부 배열만 복사할 때, copy_n 함수를 사용한다.
// copy_n 함수는 3개의 인자를 사용하는데, 첫 번째는 복사할 대상, 두 번째는 원하는 개수,
// 세 번째는 복사될 배열이다.