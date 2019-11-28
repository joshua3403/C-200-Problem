#include "pch.h"
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> data1 = { 5,3,1,7,9 };
	list<string> data2 = { "ef", "db", "kd", "ij", "gh" };

	cout << boolalpha;

	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl;
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl;

	data1.sort();
	data2.sort();

	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl;
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl;

	cout << "== data1 ==" << endl;
	for (auto i : data1)
	{
		cout << i << ", ";
	}

	cout << endl << "== data2 ==" << endl;
	for (auto i : data2)
	{
		cout << i << ", ";
	}

	return 0;
}

// 컨테이너가 오름차순으로 정렬되어 있다면 is_sorted 함수는 true를 리턴한다.
// sort 함수는 오름차순으로 정렬하기 때문에, sort 함수가 정상적으로 동작한다면 이후 해당 컨테이너의 is_sorted 함수는 true를 리턴하게 된다.