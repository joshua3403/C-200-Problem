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
	vector<int> odd;
	vector<int> even;

	partition_copy(data1.begin(), data1.end(), back_inserter(odd), back_inserter(even), IsOdd);

	cout << "== 홀수 ==" << endl;
	for (int x : odd)
		cout << x << ", ";

	cout << endl;

	cout << "== 짝수 ==" << endl;
	for (int x : even)
		cout << x << ", ";

	return 0;
}

// partition 함수를 사용화면 결과를 컨테이너에 바로 저장할 수 있다.
// 따라서, partition 함수를 단독으로 사용하는 것 보단, 되도록 partition_copy를 사용하는 것이 좋다.