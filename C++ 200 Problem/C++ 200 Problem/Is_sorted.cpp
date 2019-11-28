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

// �����̳ʰ� ������������ ���ĵǾ� �ִٸ� is_sorted �Լ��� true�� �����Ѵ�.
// sort �Լ��� ������������ �����ϱ� ������, sort �Լ��� ���������� �����Ѵٸ� ���� �ش� �����̳��� is_sorted �Լ��� true�� �����ϰ� �ȴ�.