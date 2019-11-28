#include "pch.h"
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int, 5> data1 = { 5,3,1,7,9 };
	array<int, 5> data2 = { 1,3,5,7,9 };
	array<int, 7> data3 = { 2,2,1,3,5,7,9 };

	cout << boolalpha;
	cout << "data1 == data2 : " << is_permutation(data1.begin(), data1.end(), data2.begin(), data2.end()) << endl;
	cout << "data1 == data3 : " << is_permutation(data1.begin(), data1.end(), data3.begin(), data3.end()) << endl;
	cout << "data1 == data3 (+2) : " << is_permutation(data1.begin(), data1.end(), data3.begin() + 2) << endl;

	return 0;
}

// is_permutation �Լ��� ���ĵ��� ���� �� �����̳��� ��Ҹ� ���Ѵ�.
// ������ ����� ������ ��� �Ȱ��ٸ� true, �׷��� �ʴٸ� false�� ���ϵȴ�.