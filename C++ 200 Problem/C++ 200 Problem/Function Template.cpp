#include "pch.h"
#include <iostream>

using namespace std;

template <typename T>
T Plus(T x, T y, T z = 1)
{
	return x + y + z;
}

int main()
{
	int number1 = Plus(1, 2);
	int number2 = Plus(1, 2, 3);
	double number3 = Plus(1.1, 2.2);
	double number4 = Plus(1.1, 2.2, 3.3);

	cout << "����� : " << number1 << ", " << number2 << ", " << number3 << ", " << number4 << endl;

	return 0;
}

// template�̶� Ű���尡 ������ �����Ϸ��� �ҽ� ���� �ܰ迡�� �ڷ����� �����Ѵ�.
// ���α׷��Ӵ� template�� �̿��� �ϳ��� �Լ��� �پ��� �ڷ����� �ѱ� �� �ִ�.
// template�� �����ϸ� <typename ?> ������ ����ǥ�� ä���� �Ѵ�. ������ �̸� �����ε� T�� ����ó�� ���ϴ� �̸����� ���� �����ϴ�.
// �����Ϸ��� T ��� �ڷ����� �������� �����ϰ� �ȴ�.
// ����, �Լ� ���ø������� ����Ʈ �Ű������� ����� �� �ִ�.