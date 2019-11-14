#include "pch.h"
#include <iostream>

using namespace std;

extern int g_number = 100;

int Func1()
{
	return g_number++;
}

int Func2()
{
	return g_number++;
}

int main()
{
	int number = g_number++;

	cout << "메인 number : " << number << endl;
	cout << "Func1 number : " << Func1() << endl;
	cout << "Func2 number : " << Func2() << endl;

	return 0;
}

// extern 키워드를 이용해 전역 변수를 선언한다.
// 전역 변수는 프로그램 어느 곳에서 접근하여 사용할 수 있는 변수이다.
// 다양한 이유로 사용하지 않는 것이 좋다.