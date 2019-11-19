#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int data1[10]{ 0, };
	fill(data1, data1 + 3, 10);
	fill(data1 + 4, data1 + 8, 20);

	cout << "== data1 결과 ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data1[i] << " ";

	vector<int> data2({ 0,1,2,3,4,5,6,7,8,9 });
	fill(data2.begin(), data2.begin() + 2, 30);

	cout << endl << endl << "== data2 결과 == " << endl;

	for (int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;
}

// 배열 중간의 일부 영역을 특정 값으로 변경하는 fill함수이다.
// 일정 영역을 일괄적으로 변경하는데 유용하다.
// fill 함수는 첫 번째 인자로 수정할 배열 영역의 시작 위치, 두 번째 인자로 마지막 위치를 받는다. 세 번째 인자는 수장할 값이다.