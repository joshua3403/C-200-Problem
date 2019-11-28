#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data;

	Data data1("문자열", 10, 1.2);
	auto data2 = make_tuple("문자열", 10, 1.2);

	cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl;

	return 0;
}

// 튜플을 이용하면 많은 자료형을 한 번에 다룰 수 있어 필자의 경우 전체 소스 코드의 야이 줄어드는 효과를 볼 수 있다.