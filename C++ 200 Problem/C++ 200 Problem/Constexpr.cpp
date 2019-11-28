#include "pch.h"
#include <iostream>

using namespace std;

constexpr int GetNumber1()
{
	return 2;
}

constexpr int GetNumber2(int x, int y)
{
	return x + y;
}

int main()
{
	int array1[GetNumber1()];
	int array2[GetNumber2(1, 2)];

	cout << sizeof(array1) << ", " << sizeof(array2) << endl;

	return 0;
}

// const�� �̿��� ����� ����� ����� �� ������, ����� �Բ� ���� �����ؾ� �ϴ� �������� ������ �����Ѵ�.
// ������ constexpr�� ������ ������ ���� �����ϱ� ������ const���� �����ϰ� ���� �����Ͽ� ����� �� �ִ�.
// �迭 ���� ����� �Բ� ũ�⸦ �����ؾ� �ϴµ� ũ�Ⱑ ���������� ���� �� �ִ�.
// �̶� constexpr�� ���� ���� �ذ�å�� �ȴ�.