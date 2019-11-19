#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Func1(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool &is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}

// Call by address�� �ּҸ� ��������� ���޹޾� 4����Ʈ�� �Ҵ�ȴ�.
// Func2������ ���ڷ� �ּҸ� �޴µ�, �� ��� �Լ� ȣ���ϴ� �������� ���� �״�� �ѱ����� �޴� ������ �����ͷ� �޴´�.