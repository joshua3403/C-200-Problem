#include "pch.h"
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int, 5> data{ 5,9,4,1,7 };

	auto result1 = minmax_element(data.begin(), data.end());

	cout << "�ּҰ� : " << *result1.first;
	cout << ", ��ġ : " << (result1.first - data.begin()) << '\n';
	cout << "�ִ밪 : " << *result1.second;
	cout << ", ��ġ : " << (result1.second - data.begin()) << '\n';

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) {return arg1 < arg2; });

	cout << "�ּҰ� : " << *result2.first;
	cout << ", ��ġ : " << (result2.first - data.begin()) << '\n';
	cout << "�ִ밪 : " << *result2.second;
	cout << ", ��ġ : " << (result2.second - data.begin()) << '\n';

	return 0;
}

// ���ĵ��� ���� �����̳��� �Ϻ� �������� �ּҰ��� �ִ밪�� Ȯ���� ���� minmax_element �Լ��� �������.