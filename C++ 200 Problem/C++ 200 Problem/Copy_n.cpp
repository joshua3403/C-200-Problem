#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> result;

	copy_n(data, sizeof(data), back_inserter(result));

	cout << "== result ==" << endl;
	for (auto i : result)
		cout << i << ", ";

	return 0;
}

// �迭�� ��ü�� �ƴ� �Ϻ� �迭�� ������ ��, copy_n �Լ��� ����Ѵ�.
// copy_n �Լ��� 3���� ���ڸ� ����ϴµ�, ù ��°�� ������ ���, �� ��°�� ���ϴ� ����,
// �� ��°�� ����� �迭�̴�.