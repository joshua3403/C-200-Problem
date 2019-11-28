#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	tuple<int, double> data1(1, 2.1);
	tuple<double, string> data2(3.4, "���ڿ�1");

	auto data3 = tuple_cat(data1, data2);

	cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << endl;

	return 0;
}

// auto Ű���带 �̿��� Ÿ���� �����ϸ�, tuple_cat �Լ��� �̿��� ���ο� Ʃ���� �����Ѵ�.
// tuple_cat �Լ��� data1�� data2�� ���ڷ� �����Ѵ�. ���� ������ Ʃ���� <int, double, double, string>���°� �ȴ�.