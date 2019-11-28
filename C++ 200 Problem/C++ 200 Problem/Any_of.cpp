#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool EvenOdd(int arg)
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	vector<int> data = { 8, 27, 35, 49 };

	if (any_of(data.begin(), data.end(), EvenOdd))
		cout << "data : ¦���� �����մϴ�." << endl;

	if (any_of(data.begin(), data.end(), [](int i) {return i < 10; }))
		cout << "data : 10���� ���� ���� �ֽ��ϴ�." << endl;

	return 0;
}

// any_of �Լ��� all_of �Լ��� ��� ����� ��������� �ǹ̴� �ٸ���.
// any_of �Լ��� �����̳� ��� �� �ϳ��� ���ǿ� �´ٸ� true�� �����Ѵ�.