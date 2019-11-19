#include "pch.h"
#include <iostream>

using namespace std;

void Func1(int arr[2][2])
{
	arr[0][0] = 1000;
}


void Func2(int arr[][2], int row)
{
	arr[row - 2][1] = 2000;
}

void Func3(int *arr, int row, int col)
{
	*((arr + row - 1) + col - 1) = 3000;
}

int main()
{
	int data[2][2]{ {1,2}, {3,4} };
	Func1(data);
	Func2(data, 2);
	Func3(*data, 2, 2);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << data[i][j] << endl;
	}

	return 0;
}

// 2���� �迭�� 5�� ����ó�� ���� ũ�⸦ ������ ���ڷ� ���� �� �ִ�.
// 2���� �迭 ������ ���� ������ �� ������, �̷� ��� �迭 ũ�⸦ ������ �� ��� �迭 ũ�⸦ ��� ������ ���ڷ� �޾ƾ� �Ѵ�.
// 2���� �迭�� �����ͷ� ���� �� �ִ�. int *arr�� data �迭�� 1�� 1���� ����Ų��.