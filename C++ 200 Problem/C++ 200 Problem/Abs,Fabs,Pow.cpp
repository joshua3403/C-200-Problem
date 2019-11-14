#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "== 절대값 구하기 ==" << endl;
	cout << "-10의 절대값 : " << abs(-10) << endl;
	cout << "-5.72 : " << fabs(-5.72) << endl;

	cout << "== 제곱수 구하기 ==" << endl;
	cout << "2의 2승 : " << pow(2,2) << endl;
	cout << "3의 4승 : " << pow(3,4) << endl;
	cout << "4의 6승 : " << pow(4,6) << endl;
	cout << "8의 3승 : " << pow(8,3) << endl;

	return 0;
}

// 정수의 절대값은 abs, 실수의 절대값은 fabs
// C++에서는 abs로도 실수의 절대값을 구할 수 있으며, long 자료형은 labs로 구할 수 있다.

