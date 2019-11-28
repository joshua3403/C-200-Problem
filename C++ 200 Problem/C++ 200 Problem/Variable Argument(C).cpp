#include "pch.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...)
{
	va_list ap;
	va_start(ap, arg);

	int sum = 0;

	for (int i = 0; i < arg; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return sum;
}

int main()
{
	int number = Sum(5, 1, 2, 3, 4, 5);

	cout << "1에서 5까지의 합 : " << number << endl;

	return 0;
}

// C언어 스타일의 가변인자 함수를 사용하기 전에 세 가지를 먼저 이해해야 한다.
// va_start(va_list, lastfix) : 첫 번째 각변인수 위치를 찾아 시작 번지를 알아낸다. 포인터 형태이다.
// va_arg(va_list,type) : va_list가 가리키는 위치의 값을 읽어내 리턴한다.
// va_end(va_list) : va_list를 초기화하여 가변인자 사용이 끝났음을 알린다.
// 가변인자에서 사용할 함수들은 atdarg.h에 정의되어 있다.
// va_list는 가변인자의 주소를 가리킨다. ap 포인터 형태이며 va_start에 인자로 전달되어야 실제 주소값을 보유하게 된다.