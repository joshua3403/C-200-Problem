#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 10,20,30,40 });

	cout << "== for, iterator ==" << endl;

	for (auto i = data.begin(); i != data.end(); ++i)
		cout << *i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (const auto i : data)
		cout << i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (auto& i : data)
		cout << i + 2 << ", ";

	cout << endl;

	return 0;
}

// 구간 지정 for문은 컨테이너를 조금 더 편리하게 사용할 수 있다.
// 반복자 iterator를 리턴하는 begin, end 함수를 보유한 데이터 타입이라면 구간 지정 for문에서 사용할 수 있다.