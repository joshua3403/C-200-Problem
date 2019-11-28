#include "pch.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...)
{
	va_list ap;
	va_start(ap, arg);

	int sum = 0;

	for (int i = 0; i < arg; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return sum;
}

int main()
{
	int number = Sum(5, 1, 2, 3, 4, 5);

	cout << "1���� 5������ �� : " << number << endl;

	return 0;
}

// C��� ��Ÿ���� �������� �Լ��� ����ϱ� ���� �� ������ ���� �����ؾ� �Ѵ�.
// va_start(va_list, lastfix) : ù ��° �����μ� ��ġ�� ã�� ���� ������ �˾Ƴ���. ������ �����̴�.
// va_arg(va_list,type) : va_list�� ����Ű�� ��ġ�� ���� �о �����Ѵ�.
// va_end(va_list) : va_list�� �ʱ�ȭ�Ͽ� �������� ����� �������� �˸���.
// �������ڿ��� ����� �Լ����� atdarg.h�� ���ǵǾ� �ִ�.
// va_list�� ���������� �ּҸ� ����Ų��. ap ������ �����̸� va_start�� ���ڷ� ���޵Ǿ�� ���� �ּҰ��� �����ϰ� �ȴ�.