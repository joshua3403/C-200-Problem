#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	tuple<int, double> data1(1, 2.1);
	tuple<double, string> data2(3.4, "문자열1");

	auto data3 = tuple_cat(data1, data2);

	cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << endl;

	return 0;
}

// auto 키워드를 이용해 타입을 유추하며, tuple_cat 함수를 이용해 새로운 튜플을 생성한다.
// tuple_cat 함수에 data1과 data2를 인자로 전달한다. 새로 생성된 튜플은 <int, double, double, string>형태가 된다.