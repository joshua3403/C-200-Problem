#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int *pointer1 = &number1;

	double number2 = 23.4;
	double *pointer2 = &number2;

	cout << "number1 : " << number1 << " (size : " << sizeof(number1) << ")" << endl;
	cout << "pointer1 : " << pointer1 << " (size : " << sizeof(pointer1) << ")" << endl;

	cout << "number2 : " << number2 << " (size : " << sizeof(number2) << ")" << endl;
	cout << "pointer2 : " << pointer2 << " (size : " << sizeof(pointer2) << ")" << endl;

	return 0;
}

// 포인터는 변수의 주소를 가리킨다. * 아스테리스크가 붙은 변수는 실제 값이 아니라 주소를 저장한다는 의미이다.
// & 앰퍼샌드는 변수의 주소를 불러오는 의미이다.
// 변수의 주소값은 컴퓨터 내부적으로 할당하기 때문에 사용자가 임의로 주소를 지정할 순 없다.
// 포인터 변수의 크기는 4바이트이다.
