#include "pch.h"
#include <iostream>

using namespace std;

void Func(int arg)
{
	cout << "���� �� : " << arg << endl;
	arg += 10;
	cout << "���� �� : " << arg << endl;
}


int main()
{
	int year(10);

	Func(year);

	cout << "�Լ� ���� �� : " << year << endl;

	return 0;
}

// Call by Value�� ���ڷ� �Ѿ�� ���� ���������� ������ ����Ѵ�. �׷��Ƿ� year ������ Func �Լ� ���ο� ����� ���� ���� �ʴ�.