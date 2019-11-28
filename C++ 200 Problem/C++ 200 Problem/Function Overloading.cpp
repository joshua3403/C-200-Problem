#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int Plus(int arg1, int arg2)
{
	return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3)
{
	return arg1 + arg2 + arg3;
}

int main()
{
	int number1 = Plus(2, 4);
	double number2 = Plus(3.4, 5.7, 8.4);

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	return 0;
}

// 어떤 프로그래밍 언어든 유효 볌위 안에선 함수 이름을 중복하여 사용할 수 없다.
// 하지만 인자나 리턴값이 다르면, 같은 이름의  함수를 선언하여 사용할 수 있다.
// 이것을 함수 오버로딩이라 부르며 매우 유용하게 사용할 수 있다.