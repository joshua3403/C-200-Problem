#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 9;

	int z = x + y;

	double i = 1.2;
	double j = 2.3;

	double k = i + j;

	cout << "x + y = " << z << endl;

	cout << "i + j = " << k << endl;

	return 0;
}

// 대입 연산자의 왼쪽에는 l-value가 위치. l-value에는 상수 불가. 변수만 가능.