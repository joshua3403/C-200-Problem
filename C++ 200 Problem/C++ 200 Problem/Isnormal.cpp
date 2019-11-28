#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double number1 = 1;
	double number2 = 0.4;
	double number3 = 0.0;
	double number4 = 11.2;

	cout << boolalpha;
	cout << isnormal(number1) << endl;
	cout << isnormal(number2) << endl;
	cout << isnormal(number3) << endl;
	cout << isnormal(number4) << endl;

	return 0;

}

// 실수가 0이라면 false, 0이 아니라면 true를 반환하는 함수이다.
