#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	tuple<int, string> data1(1, "def");
	tuple<int, string> data2(1, "abc");

	if (data1 > data2)
		cout << "data1 > data2" << endl;
	else
		cout << "data1 < data2" << endl;

	tuple<double, string> data3(1.0, "def");
	tuple<double, string, int> data4(2.0, "abc", 3);

	//if (data3 == data4)
	//	cout << "data3 == data4" << endl;
	//else
	//	cout << "data3 != data4" << endl;

	return 0;
}

// 튜플을 비교할 때 기본 연산자를 이용할 수 있다.
// 튜플은 같은 형태끼리 비교할 수 있으며, 만약 형태가 다르면 에러가 발생한다.ㄴ