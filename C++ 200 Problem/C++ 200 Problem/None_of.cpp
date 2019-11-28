#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data = { 8,27,35,49 };

	bool is_small = none_of(data.begin(), data.end(), [](int i) { return i < 100; });

	bool is_zero = none_of(data.begin(), data.end(), [](int i) {return i != 0; });

	if (!is_small&& !is_zero)
		cout << "data �ڷ�� ��� 100���� �۰� 0�� �ƴմϴ�." << endl;

	return 0;
}

// none_of �Լ��� �����̳� ��� ��ΰ� ���ǿ� ���� �ʾƾ� true�� �����Ѵ�.