#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int data1[10]{ 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);

	cout << "== data1 결과 ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data1[i] << " ";

	vector<int> data2({ 0,1,2,3,4,5,6,7,8,9 });
	fill_n(data2.begin(), data2.size() - 1, 30);
	fill_n(data2.begin(), 4, 30);

	cout << endl << endl << "== data2 결과 == " << endl;

	for (int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;
}

// fill 함수와 fill_n 함수의 차이점은 두 번째 인자이다.
// fill_n은 fill 처럼 사용할 수 있지만, 2번째 인자를 종료 위치가 아닌 개수로 받는다.