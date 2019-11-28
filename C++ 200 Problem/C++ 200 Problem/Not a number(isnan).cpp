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
	cout << isnan(number1 / number4) << endl;
	cout << isnan(number2 / number3) << endl;
	cout << isnan(number3 / number3) << endl;
	cout << isnan(number4 / number1) << endl;

	return 0;
}

// isnan 함수를 이용해 연산 과정이 정상인지 판단할 수 있다.
// 잘못된 연산이면 true, 정상적인 연산이면 false를 반환한다.