#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "gasdfasef";

	reverse(str1.begin(), str1.end());

	cout << str1 << endl;

	return 0;
}

// ���ڿ��� ù ��ġ�� ������ ��ġ�� ���ڷ� �����Ѵ�.
// ù ��ġ���� ������ ��ġ���� ��� �����´ٴ� �ǹ��̴�.
