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

// 2차원 배열은 5번 라인처럼 직접 크기를 지정해 인자로 받을 수 있다.
// 2차원 배열 인자의 행은 생략할 수 있으며, 이럴 경우 배열 크기를 가늠할 수 없어서 배열 크기를 담는 변수를 인자로 받아야 한다.
// 2차원 배열을 포인터로 받을 수 있다. int *arr은 data 배열의 1행 1열을 가리킨다.